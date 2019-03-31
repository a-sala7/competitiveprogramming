#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    bool distinct[26] = {false};
    char x;
    while(cin>>x){
        if(x >= 'a' && x <= 'z')
            distinct[x-'a'] = true;
        if(x == '}')
            break;
    }
    for (int i = 0; i < 26; i++){
        if(distinct[i]){
            n++;
        }
    }
    cout<<n;
}