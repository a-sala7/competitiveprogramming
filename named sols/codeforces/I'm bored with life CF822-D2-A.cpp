#include <iostream>

using namespace std;

int main()
{
    //I'm bored with life CF822-D2-A
    long long a, b;
    cin>>a>>b;
    int n = min(a,b);
    for(int i = n-1; i > 1; i--){
        n*=i;
    }
    cout<<n;
}
