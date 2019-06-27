#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Soft Drinking CF151-D2-A
    int n, k, l;
    int c, d, p;
    int nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int mlAvailable = k*l;
    int slicesAvailable = c*d;
    int toasts = min(mlAvailable/nl,min(p/np,slicesAvailable));
    cout<<toasts/n;
}
