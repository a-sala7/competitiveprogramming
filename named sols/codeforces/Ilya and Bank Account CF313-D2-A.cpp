#include <iostream>
#include <string>
#define ull unsigned long long

using namespace std;

int main()
{
    //Ilya and Bank Account CF313-D2-A
    long frNum, scNum, thrNum;
    cin>>frNum;
    string s, removeLast, removeScToLast;
    s = to_string(frNum);
    int n = s.size();
    if(s[0]=='-'){
        for(int i = 1; i < n-1; i++){
            removeLast+=s[i];
        }
        for(int i = 1; i < n-2; i++){
            removeScToLast+=s[i];
        }
        removeScToLast+=s[n-1];
        scNum = stol(removeLast);
        thrNum = stol(removeScToLast);
        long ans = min(-frNum,min(scNum,thrNum));
        if(ans==0)
            cout<<ans;
        else
            cout<<'-'<<ans;
    } else {
        cout<<s;
    }
}
