#include <iostream>

using namespace std;

int main()
{
    //Nearly Lucky Number CF110-D2-A
    string s;
    cin>>s;
    unsigned long long luckyDigitsInS = 0;
    for(unsigned long long i = 0; i < s.size(); i++){
        if(s[i]=='4'||s[i]=='7')
            luckyDigitsInS++;
    }
    string t = to_string(luckyDigitsInS);
    bool lucky = true;
    for(unsigned long long i = 0; i < t.size(); i++){
        if(t[i]!='4'&&t[i]!='7'){
            lucky = false;
            break;
        }
    }
    if(lucky)
        cout<<"YES";
    else
        cout<<"NO";
}
