#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//Ultra-Fast Mathematician CF61-D2-A
    string s, t;
    cin>>s>>t;
    for(int i = 0; i < s.size(); i++){
        cout<<(s[i]!=t[i]);
    }
}
