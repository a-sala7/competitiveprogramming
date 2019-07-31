#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    //Vanya and Lanterns CF492-D2-B
    int n;
    long l;
    cin>>n>>l;
    long lanterns[n];
    for(int i = 0; i < n; i++){
        cin>>lanterns[i];
    }
    sort(lanterns,lanterns+n);
    long maxDistBetween = -1;
    long maxDistEnds = max(lanterns[0], l-lanterns[n-1]);
    for(int i = 0; i < n-1; i++){
        maxDistBetween = max(maxDistBetween, abs(lanterns[i]-lanterns[i+1]));
    }
    float x = (float)maxDistBetween/2;
    float y = maxDistEnds;
    //cout<<x<<' '<<maxDistEnds;
    cout<<setprecision(10)<<fixed;
    cout<<max(x,y);
}
