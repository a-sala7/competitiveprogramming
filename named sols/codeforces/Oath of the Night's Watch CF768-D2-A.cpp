#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long n;
    cin>>n;
    long long stewards[n];
    long long maxi = 0;
    long long mini = 1+pow(10,9);
    for (int i = 0; i < n; i++){
        cin>>stewards[i];
        maxi = max(maxi,stewards[i]);
        mini = min(mini,stewards[i]);
    }
    long numSupp = 0;
    for (int i = 0; i < n; i++){
        if(stewards[i] < maxi && stewards[i] > mini)
            numSupp++;
    }
    cout<<numSupp;
}