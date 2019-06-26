#include <iostream>

using namespace std;

int main()
{
	//Case of the Zeroes and Ones CF556-D2-A
    long n;
    string s;
    cin>>n>>s;
    char curr, nxt;
    long ones = 0, zeroes = 0;
    for (long i = 0; i < s.size(); i++){
        if(s[i] == '1')
            ones++;
        else
            zeroes++;
    }
    if(ones==zeroes){
        cout<<0;
    } else {
        cout<<n-(2*min(ones,zeroes));
    }
}
