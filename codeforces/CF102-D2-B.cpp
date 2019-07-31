#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ull unsigned long long
#define all(v) v.begin(), v.end()

using namespace std;

string spell(string s){
    long sz = s.size();
    long sum = 0;
    for(long i = 0; i < sz; i++){
        sum += (s[i] - '0');
    }
    return to_string(sum);
}

int main()
{
    //Sum of Digits CF102-D2-B
    string num;
    cin>>num;
    long spellCasts = 0;
    while(true){
        if(num.size()==1)
            break;
        num = spell(num);
        spellCasts++;
    }
    cout<<spellCasts;
}
