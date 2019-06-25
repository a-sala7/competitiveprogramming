#include <iostream>

using namespace std;

int main()
{
	//Counterexample CF483-D2-A
    long long l, r;
    cin>>l>>r;
    if(l%2!=0){
        l++;
    }
    if(r-l <= 1){
        cout<<-1;
    } else {
        cout<<l<<' '<<l+1<<' '<<l+2;
    }
}
