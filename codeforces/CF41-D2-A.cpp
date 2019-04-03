#include <iostream>

using namespace std;

int main()
{
    string s;
    string t;
    cin>>s>>t;
    bool rev = true;
    for (int i = 0; i < s.size(); i++){
        if(s[i] != t[t.size()-1-i]){
            rev = false;
            break;
        }
    }
    if(rev)
        cout<<"YES";
    else
        cout<<"NO";
}
