#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //The Bus Driver Problem 11389
    int n, limit, rate;
    cin>>n>>limit>>rate;
    while(n&&limit&&rate){
        int mRoutes[n];
        int eRoutes[n];
        for(int i = 0; i < n; i++)
            cin>>mRoutes[i];
        for(int i = 0; i < n; i++)
            cin>>eRoutes[i];
        sort(mRoutes, mRoutes+n);
        sort(eRoutes, eRoutes+n);
        long paid = 0;
        for(int i = 0; i < n; i++){
            if(mRoutes[i]+eRoutes[n-i-1] > limit){
                paid += rate * (mRoutes[i]+eRoutes[n-i-1]-limit);
            }
        }
        cout<<paid<<endl;
        cin>>n>>limit>>rate;
    }
}
