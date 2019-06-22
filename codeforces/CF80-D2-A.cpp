#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    bool bIsPrime = true;
    for(int i = 2; i < b; i++){
        if(b%i==0)
            bIsPrime = false;
    }
    if(!bIsPrime){
        cout<<"NO";
    } else {
        int primeFound = -1;
        for(int i = a+1; i < b; i++){
                bool prime = true;
            for(int j = 2; j < i; j++){
                if(i%j==0){
                    prime = false;
                    break;
                }
            }
            if(prime){
                primeFound = i;
                break;
            }
        }
        if(primeFound == -1){
            cout<<"YES";
        } else {
            cout<<"NO";
        }
    }
}
