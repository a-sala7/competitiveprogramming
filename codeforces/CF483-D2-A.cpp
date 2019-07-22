#include <iostream>
#define ull unsigned long long

using namespace std;

int main()
{
    //Counterexample CF483-D2-A
    ull l,r,a,b,c;
    cin>>l>>r;
    if(r-l<2)
        cout<<-1;
    else
    {
        if(l%2!=0){
            a = l+1;
        } else {
            a = l;
        }
        b = a+1;
        c = b+1;
        if(c>r)
            cout<<-1;
        else
            cout<<a<<' '<<b<<' '<<c;
    }
}
