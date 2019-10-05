#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //Dragon of Loowater 11292
    int n, m;
    cin>>n>>m;
    while(n&&m){
        int heads[n], knights[m];
        bool cut[n] = {0};
        for(int i = 0; i < n; i++)
            cin>>heads[i];
        for(int i = 0; i < m; i++)
            cin>>knights[i];
        sort(heads, heads+n);
        sort(knights, knights+m);
        long cost = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(heads[j] <= knights[i] && !cut[j]){
                    cut[j] = true;
                    cost += knights[i];
                    knights[i] = 0;
                    break;
                }
            }
        }
        bool done = true;
        for(int i = 0; i < n; i++){
            if(!cut[i])
                done = false;
        }
        if(done)
            cout<<cost<<endl;
        else
            cout<<"Loowater is doomed!"<<endl;
        cin>>n>>m;
    }
}
