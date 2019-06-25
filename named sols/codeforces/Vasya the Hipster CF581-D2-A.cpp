#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//Vasya the Hipster CF581-D2-A
    int red, blue;
    cin>>red>>blue;
    int hipDays = 0;
    int normalDays = 0;
    int totalSocks = red+blue;
    while(red>0 && blue>0){
        hipDays++;
        red--;
        blue--;
        totalSocks-=2;
    }
    while(totalSocks >= 2){
        normalDays++;
        totalSocks-=2;
    }
    cout<<hipDays<<' '<<normalDays;
}
