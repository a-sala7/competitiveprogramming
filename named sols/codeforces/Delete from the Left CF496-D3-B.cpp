#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //Delete from the Left CF496-D3-B
    string s, t;
    cin>>s>>t;
    long n = s.size();
    long m = t.size();
    long p1 = n-1;
    long p2 = m-1;
    long matches = 0;
    while(s[p1] == t[p2] && p1>=0 && p2>=0){
        matches++;
        p1--;
        p2--;
    }
    cout<<n+m-matches*2;
}
