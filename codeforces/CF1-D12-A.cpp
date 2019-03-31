#include <iostream>
#include <math.h>

using namespace std;

int main()
{
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
