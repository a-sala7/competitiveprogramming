#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    //Keyboard CF88-D2-B
    int n,m,x;
    cin>>n>>m>>x;
    char keyboard[n][m];
    int ltrFreq[26] = {0};
    int nShifts = 0;
    vector <pair<int, int>> shifts;
    vector <pair<int, int>> letters[26];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>keyboard[i][j];
            if(keyboard[i][j]=='S'){
                shifts.push_back(make_pair(i,j));
                nShifts++;
            } else {
                ltrFreq[keyboard[i][j]-'a']++;
                letters[keyboard[i][j]-'a'].push_back(make_pair(i,j));
            }
        }
    }
    long q;
    string s;
    cin>>q>>s;
    long iLikeToMoveItMoveIt = 0;
    bool possible = true;
    for(int i = 0; i < q; i++){
        int currFreq;
        //fails cuz letter is there or is upper and no shifts
        if(s[i] >= 'a' && s[i] <= 'z'){
            currFreq = ltrFreq[s[i]-'a'];
            if(currFreq<1){
                cout<<-1;
                possible = false;
                break;
            }
            continue;
        } else {
            currFreq = ltrFreq[s[i]+32-'a'];
            if(currFreq<1){
                cout<<-1;
                possible = false;
                break;
            } else if(currFreq>0 && nShifts<1){
                cout<<-1;
                possible = false;
                break;
            }
        }
    }
    if(possible){
        bool can[26] = {false};
        for(int z = 0; z < 26; z++){
            for(int i = 0; i < ltrFreq[z]; i++){
                for(int j = 0; j < nShifts; j++){
                    /*x of shift number j : shift[j].first
                      y of shift number j : shift[j].second
                      x of letter number i: letters[z][i].first
                      y of letter number i: letters[z][i].second*/
                    int xDist = abs(shifts[j].first-letters[z][i].first)*abs(shifts[j].first-letters[z][i].first);
                    int yDist = abs(shifts[j].second-letters[z][i].second)*abs(shifts[j].second-letters[z][i].second);
                    if(x*x >= xDist + yDist){
                        can[z] = true;
                    }
                }
            }
        }
        for(int i = 0; i < q; i++){
            if(s[i]>='a'&&s[i]<='z'){
                continue;
            } else {
                if(!can[s[i]+32-'a']){
                    iLikeToMoveItMoveIt++;
                }
            }
        }
    }
    if(possible){
        cout<<iLikeToMoveItMoveIt;
    }
}
