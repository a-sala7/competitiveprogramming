#include <iostream>
#define ull unsigned long long

using namespace std;

int main()
{
    //Bear and Finding Criminals CF680-D2-B
    int n, myLoc;
    cin>>n>>myLoc;
    myLoc--;
    bool cities[n];
    for(int i = 0; i < n; i++){
        cin>>cities[i];
    }
    int catching = 0;
    if(cities[myLoc])
        catching++;
    int r,l;
    for(int i = 1; i < n; i++){
        r = myLoc+i;
        l = myLoc-i;
        if(cities[r] && cities[l] && r < n && r >= 0 && l < n && l >= 0)
            catching+=2;
        if(cities[r] && r < n && r >= 0){
            if(l >= n || l < 0){
                catching++;
            }
        }
        if(cities[l] && l < n && l >= 0){
            if(r >=n || r < 0){
                catching++;
            }
        }
    }
    cout<<catching;
}
