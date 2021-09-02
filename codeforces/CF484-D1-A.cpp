#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define fr first
#define sc second
#define inp(arr,n) for(int i = 0; i < n; i++){cin>>arr[i];}
#define ull unsigned long long

using namespace std;
//Bits CF484-D1-A

int popcount(long long x){
    int c = 0;
    while(x){
        if(x&1)
            c++;
        x = x>>1;
    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    pair<ull, ull> queries[n];
    ull a,b;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        queries[i] = make_pair(a, b);
    }
    for(int i = 0; i < n; i++){
        ull l = queries[i].fr;
        ull r = queries[i].sc;
        for(int j = 0; j < 64; j++){
            if((l | (1LL<<j)) > r){
                break;
            }
            l |= (1LL<<j);
        }
        cout<<l<<endl;
    }
}