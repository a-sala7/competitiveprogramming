#include <iostream>
#include <tgmath.h>
using namespace std;

int main()
{
	//Carrot Cakes CF799-D2-A
    bool worthwhile = true;
    float orders, bundleTime, prod, buildTime;
    cin>>orders>>bundleTime>>prod>>buildTime;
    if(orders <= prod){
        worthwhile = false;
    } else {
        int bundlesNeeded = ceil(orders/prod);
        if(bundlesNeeded*bundleTime <= bundleTime + buildTime){
            worthwhile = false;
        }
    }
    if(worthwhile){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}