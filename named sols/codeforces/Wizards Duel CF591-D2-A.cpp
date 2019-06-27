#include <iostream>
#include <queue>

using namespace std;

int main()
{
    //Wizards Duel CF591-D2-A
    /*d1 = v1*tc //projectile 1
    L-d1 = v2*tc //projectile 2

    by addition

    L-d1+d1 = v1*tc+v2tc
    L = v1*tc+v2tc
    L = tc(v1+v2)
    tc = L/(v1+v2)*/
    double L, v1, v2;
    cin>>L>>v1>>v2;
    //time to first collision
    double tc1 = L/(v1+v2);
    //cout<<tc1<<endl;
    //distance at first collision
    double d1 = v1*tc1;
    //double d2 = v2*tc1;
    //cout<<d1<<' '<<d2;
    //lmao it's over? eshta, thought I'd have to calculate every trip but they just meet at the same point every time..
    cout<<d1;
}
