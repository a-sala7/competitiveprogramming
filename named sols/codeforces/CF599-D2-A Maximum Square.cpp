#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //CF599-D2-A Maximum Square
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        reverse(arr, arr+n);
        int sz = 0;
        for(int i = 0; i < n; i++){
            sz = max(sz, min(arr[i],i+1));
        }
        cout<<sz<<endl;
    }
}
