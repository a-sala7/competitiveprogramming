#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //Gravity Flip CF405-D2-A
    int n;
    cin>>n;
    int colCubes[n];
    for(int i = 0; i < n; i++){
        cin>>colCubes[i];
    }
    sort(colCubes,colCubes+n);
    for(int i = 0; i < n; i++){
        cout<<colCubes[i]<<' ';
    }
}
