#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define fr first
#define sc second

using namespace std;
//Fedor and New Game CF467-D2-B

bool canBefriend(int a, int b, int differenceLimit, int bits)
{
    int diffs = 0;
    for(int i = 0; i < bits; i++){
        if((a & 1<<i) != (b & 1<<i))
            diffs++;
    }
    return diffs <= differenceLimit;
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    m++;
    int armies[m];
    for(int i = 0; i < m; i++){
        cin>>armies[i];
    }
    int friends = 0;
    for(int i = 0; i < m-1; i++){
        if(canBefriend(armies[m-1], armies[i], k, n)){
            friends++;
        }
    }
    cout<<friends;
}