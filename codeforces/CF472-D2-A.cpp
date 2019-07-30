#include <iostream>

using namespace std;

int main()
{
    //Design Tutorial: Learn from Math CF472-D2-A
    long n;
    cin>>n;
    bool compositeNum[n+1] = {false};
    for(int i = 2; i < n; i++){
        for(int j = 2; j*i <= n; j++){
            compositeNum[j*i] = true;
        }
    }
    bool done = false;
    for(int i = 0; i < n+1; i++){
        if(compositeNum[i]){
            for(int j = 0; j < n+1; j++){
                if(compositeNum[j]){
                    if(i+j==n){
                        done = true;
                        cout<<i<<' '<<j;
                        break;
                    }
                }
            }
        }
        if(done)
            break;
    }
}
