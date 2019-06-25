#include <iostream>

using namespace std;

int main()
{
	//Calculating Function CF486-D2-A
    bool nIsOdd;
    long long originalN, n, odds, evens;
    cin>>originalN;
    if(originalN%2==0)
        nIsOdd = false;
    else
        nIsOdd = true;
    n = originalN/2;
    odds = n*n;
    evens = n*(n+1);
    if(nIsOdd){
        cout<<evens-odds-originalN;
    } else {
        cout<<evens-odds;
    }
}
