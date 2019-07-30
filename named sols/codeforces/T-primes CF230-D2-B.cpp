#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ull unsigned long long
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
    //T-primes CF230-D2-B
    long lim = 1000000;
    bool notPrime[lim] = {false};
    vector<ull> primes;
    primes.reserve(78498);
    notPrime[0] = true;
    notPrime[1] = true;
    for(int i = 2; i < 1000; i++){
        if(!notPrime[i]){
            for(int j = 2; j*i < lim; j++){
                notPrime[i*j] = true;
            }
        }
    }
    for(int i = 0; i < lim; i++){
        if(!notPrime[i])
            primes.push_back(i);
    }
    long n;
    cin>>n;
    ull nums[n];
    for(int i = 0; i < n; i++){
        cin>>nums[i];
        if(binary_search(all(primes), sqrt(nums[i]))){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}
