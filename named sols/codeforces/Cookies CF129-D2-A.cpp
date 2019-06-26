#include <iostream>

using namespace std;

int main()
{
	//Cookies CF129-D2-A
    int n;
    cin>>n;
    int sum = 0;
    int cookiesInBag[n];
    for(int i = 0; i < n; i++){
        cin>>cookiesInBag[i];
        sum+=cookiesInBag[i];
    }
    int ways = 0;
    for(int i = 0; i < n; i++){
        if((sum-cookiesInBag[i])%2==0)
            ways++;
    }
    cout<<ways;
}
