#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //Tanya and Stairways CF496-D3-A
    int n;
    cin>>n;
    int a[n];
    int nClimbed = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]==1)
            nClimbed++;
    }
    int sizes[nClimbed];
    int c = 0;
    for(int j = 0; j < n; j++){
        if(j && a[j]==1){
            sizes[c] = a[j-1];
            c++;
        }
    }
    sizes[nClimbed-1] = a[n-1];
    cout<<nClimbed<<endl;
    for(int i = 0; i < nClimbed; i++)
        cout<<sizes[i]<<' ';
}
