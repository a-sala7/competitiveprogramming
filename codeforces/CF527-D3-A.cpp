#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Uniform String CF527-D3-A
    int q;
    cin>>q;
    while(q--){
        int n, k;
        cin>>n>>k;
        int printed = 0;
        while(printed<n){
            for(int j = 0; j < k && printed<n; j++){
                cout<<(char)('a'+j);
                printed++;
            }
        }
        cout<<endl;
    }
}
