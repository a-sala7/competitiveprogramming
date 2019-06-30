#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    //Keyboard CF88-D2-B
    //unsolved TLE because apparently the problem setter is a sadist retard
    //I need to create frequency arrays, fucking arrays of vectors of pairs of ints just
    //to get a half-decent time complexity on this
    //and if that wasn't enough, for test 51 I also need the solution to be aware of the distances it's trying so it doesn't
    //try further ones when the closer isn't working. I don't even want to begin thinking about that, I'll probably have to
    //rewrite the entire solution, rethink my entire approach for that.
    //Fuck this stupid ass dumbass shit problem setter and his dumbass problem.
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
    /*for(int i = 0; i < 26; i++){
        if(letters[i].size()>0){
            cout<<"Can write "<<(char)(i+'a')<<' '<<letters[i].size()<<" time(s) with the following coords: "<<endl;
        }
        for(int j = 0; j < ltrFreq[i]; j++){
            cout<<" ("<<letters[i][j].first<<' '<<letters[i][j].second<<") "<<endl;
        }
    }
    cout<<"Can write "<<nShifts<<" shift(s) with the following coords: "<<endl;
    for(int i = 0; i < nShifts; i++){
        cout<<" ("<<shifts[i].first<<' '<<shifts[i].second<<") "<<endl;
    }*/
    long q;
    string s;
    cin>>q>>s;
    long iLikeToMoveItMoveIt = 0;
    bool possible = true;
    for(int i = 0; i < q; i++){
        int currFreq;
        int currInt; //to use in accessing the character's relevant info in other arrays
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
            currInt = s[i]+32-'a';
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
        bool moving = true;
        for(int j = 0; j < currFreq; j++){
            for(int k = 0; k < nShifts; k++){
                //x of shift number k : shift[k].first
                //y of shift number k : shift[k].second
                //x of letter number j: letters[currInt][j].first
                //y of letter number j: letters[currInt][j].second
                int xDist = abs(shifts[k].first-letters[currInt][j].first)*abs(shifts[k].first-letters[currInt][j].first);
                int yDist = abs(shifts[k].second-letters[currInt][j].second)*abs(shifts[k].second-letters[currInt][j].second);
                if(x*x >= xDist + yDist){
                    moving = false;
                    break;
                }
            }
            if(!moving)
                break;
        }
        if(moving)
            iLikeToMoveItMoveIt++;
    }
    if(possible){
        cout<<iLikeToMoveItMoveIt;
    }
}
