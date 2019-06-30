#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //Sasha and His Trip CF1113-D2-A
    int n, v;
    cin>>n>>v;
    if(n<=v){
        cout<<n-1;
    } else {
        int cost = 0;
        int tank = 0;
        for(int i = 1; i <= n; i++){
            if(i==1){
                cost = i*v;
                tank = v;
            } else if(n-i>tank){
                cost+=i;
                tank = v;
            }
            tank--;
        }
        cout<<cost;
    }
}
