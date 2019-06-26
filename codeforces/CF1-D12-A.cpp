#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//Theatre Square CF1-D12-A
    long double x, y, a;
    cin>>x>>y>>a;
    long long int xx = x/a;
    long long int yy = y/a;
    while(xx*a<x){
        xx++;
    }
    while(yy*a<y){
        yy++;
    }
    long long int n = xx*yy;
    cout<<n;
}
