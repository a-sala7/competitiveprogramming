#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //Lovely Palindromes CF360-D2-B
    string s;
    cin>>s;
    cout<<s;
    long n = s.size();
    for(long i = n-1; i >= 0; i--){
        cout<<s[i];
    }
}
