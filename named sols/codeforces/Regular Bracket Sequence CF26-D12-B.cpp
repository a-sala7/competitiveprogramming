#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define fr first
#define sc second

using namespace std;

int main()

{
    //Regular Bracket Sequence CF26-D12-B
    string s;
    cin>>s;
    long n = s.size();
    long parens = 0;
    long counter = 0;
    for(int i = 0; i < n; i++){
        if(s[i]=='('){
            counter++;
        }
        if(s[i]==')'){
            if(counter>0){
                parens++;
                counter--;
            } else {
                counter = 0;
            }
        }
    }
    cout<<parens*2;
}
