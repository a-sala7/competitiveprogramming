#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

bool distCheck(pair<int, int> a, pair<int, int> b, int x){
    if((a.fr-b.fr)*(a.fr-b.fr) + (a.sc-b.sc)*(a.sc-b.sc) <= x*x)
        return true;
    else
        return false;
}

int main()
{
    //Keyboard CF88-D2-B
    int n, m, x;
    cin>>n>>m>>x;
    vector<pair<int, int>> shifts;
    vector<pair<int, int>> keys;
    keys.reserve(900);
    shifts.reserve(900);
    char kb[n][m];
    bool typable[123] = {0};
    int nKeys = 0, nShifts = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>kb[i][j];
            if(kb[i][j]=='S'){
                shifts.push_back(make_pair(i, j));
                nShifts++;
            }
            else {
                keys.push_back(make_pair(i, j));
                typable[kb[i][j]] = true;
                nKeys++;
            }
        }
    }
    if(nShifts)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(kb[i][j]!='S')
                    typable[kb[i][j]-32] = true;
    bool can[123] = {0};
    for(int i = 0; i < nKeys; i++){
        for(int j = 0; j < nShifts; j++){
            if(distCheck(keys[i],shifts[j],x)){
                can[kb[keys[i].fr][keys[i].sc]-32] = true;
                break;
            }
        }
    }
    long q;
    string s;
    cin>>q>>s;
    long moves = 0;
    for(int i = 0; i < q; i++){
        if(!typable[s[i]]){
            cout<<-1;
            return 0;
        }
        if(s[i] >= 'A' && s[i] <= 'Z')
            if(!can[s[i]])
                moves++;
    }
    cout<<moves;
}
