#include <iostream>

using namespace std;

int main()
{
    //Word Capitalization CF281-D2-A
    char initial;
    string s;
    cin>>initial>>s;
    if(initial >= 'a' && initial <= 'z'){
        char x = initial-32;
        cout<<x<<s;
    } else {
        cout<<initial<<s;
    }
}
