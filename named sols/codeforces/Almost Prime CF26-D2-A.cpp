#include <iostream>
#include <algorithm>
#include <vector>
#define fr first
#define sc second

using namespace std;

int main()
{
    //Almost Prime CF26-D2-A
    vector<int> primes;
    primes.reserve(430);
    bool notPrime[3001] = {false};
    for(int i = 2; i < 3001; i++){
        for(int j = 2; j*i < 3001; j++){
            notPrime[j*i] = true;
        }
    }
    //int nPrimes = 0;
    for(int i = 2; i < 3001; i++){
        if(!notPrime[i]){
            primes.push_back(i);
            //nPrimes++;
        }
    }
    int almostPrimes = 0;
    int n, dividedBy = 0;
    cin>>n;
    for(int i = 2; i <= n; i++){
        dividedBy = 0;
        for(int j = 0; primes[j] < i; j++){
            if(i%primes[j]==0)
                dividedBy++;
            if(dividedBy>2)
                break;
        }
        if(dividedBy==2){
            almostPrimes++;
        }
    }
    cout<<almostPrimes;
}
