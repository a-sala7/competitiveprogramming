#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Points in Segments CF501-D3-A
    int n, m;
    cin>>n>>m;
    int l[n], r[n];
    bool belong[m+1] = {0};
    for(int i = 0; i < n; i++){
        cin>>l[i]>>r[i];
        for(int j = l[i]; j <= r[i]; j++){
            belong[j] = true;
        }
    }
    int c = 0;
    for(int i = 1; i < m+1; i++){
        if(!belong[i])
            c++;
    }
    cout<<c<<endl;
    for(int i = 1; i < m+1; i++){
        if(!belong[i])
            cout<<i<<' ';
    }
}
