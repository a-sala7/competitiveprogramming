#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Summer Camp CF672-D2-A
    int n;
    cin>>n;
    string s = "123456789101112131415";
    int i = 16;
    while(s.size()<1000){
        string curr = to_string(i);
        if(curr[0]=='1'){
            s+=curr;
        }
        i++;
    }
    cout<<s[n-1];
}
