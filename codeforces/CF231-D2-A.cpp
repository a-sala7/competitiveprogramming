#include <iostream>

using namespace std;

int main()
{
    //Team CF231-D2-A
    int n;
    cin>>n;
    int solved = 0;
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>1)
            solved++;
    }
    cout<<solved;
}
