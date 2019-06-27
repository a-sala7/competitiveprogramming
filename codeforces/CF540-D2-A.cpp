#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Combination Lock CF540-D2-A
    int n;
    string s, t;
    cin>>n>>s>>t;
    int moves = 0;
    for(int i = 0; i < n; i++){
        int forwrd = abs(s[i]-t[i]);
        int backwrd = 10-abs(s[i]-t[i]);
        moves += min(forwrd,backwrd);
    }
    cout<<moves;
}
