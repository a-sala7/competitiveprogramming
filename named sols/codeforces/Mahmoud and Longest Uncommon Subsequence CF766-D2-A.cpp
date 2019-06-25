#include <iostream>

using namespace std;

int main()
{
	//Mahmoud and Longest Uncommon Subsequence CF766-D2-A
    string s, t;
    cin>>s>>t;
    if(s==t)
        cout<<-1;
    else{
        cout<<max(s.size(),t.size());
    }
}
