#include <iostream>

using namespace std;

int main()
{
    //Petya and Strings CF112-D2-A
    string s,t;
    cin>>s>>t;
    int sz = s.size();
    for(int i = 0; i < sz; i++){
        if(s[i]>='A'&&s[i]<='Z')
            s[i]+=32;
        if(t[i]>='A'&&t[i]<='Z')
            t[i]+=32;
    }
    if(s<t){
        cout<<-1;
    } else if(s>t){
        cout<<1;
    } else {
        cout<<0;
    }
}
