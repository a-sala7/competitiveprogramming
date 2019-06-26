#include <iostream>

using namespace std;

int main()
{
    //Beautiful Year CF271-D2-A
    int n;
    cin>>n;
    string s;
    for(int i = n+1; i < 9050; i++){
        bool goodNum = true;
        s = to_string(i);
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                if(s[j]==s[k] && k!=j){
                    goodNum = false;
                    break;
                }
            }
            if(!goodNum){
                break;
            }
        }
        if(goodNum){
            cout<<i;
            break;
        }
    }
}
