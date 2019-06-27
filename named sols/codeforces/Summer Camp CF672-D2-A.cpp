#include <iostream>

using namespace std;

int main()
{
    //Summer Camp CF672-D2-A
    int n;
    cin>>n;
    string s = "";
    int i = 1;
    while(s.size()<1000){
        s+=to_string(i);
        i++;
    }
    cout<<s[n-1];
}
