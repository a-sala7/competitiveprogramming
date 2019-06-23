#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin>>s>>t;
    int alreadyR = 0;
    int alreadyL = 0;
    int onScale = s.size()-1;
    int inHand = t.size();
    bool delimiterPassed = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '|'){
            delimiterPassed = true;
        } else {
            if(delimiterPassed){
                alreadyR++;
            } else {
                alreadyL++;
            }
        }
    }
    if((onScale+inHand)%2!=0 || alreadyL > alreadyR+inHand || alreadyR > alreadyL+inHand){
        cout<<"Impossible";
    } else {
        bool done = false;
        //if left is good, adding all to right
        if(alreadyL == (alreadyR+inHand)){
            cout<<s<<t;
            done = true;
        }
        //if right is good, adding all to left
        if(alreadyR == (alreadyL+inHand)){
            cout<<t<<s;
            done = true;
        }
        //tiring part
        if(!done){
            int balance = (onScale+inHand)/2;
            int rNeed = balance-alreadyR;
            int lNeed = balance-alreadyL;
            bool mainPrinted;
            int lastLet = 0;
            for(int i = 0; i < lNeed; i++){
                cout<<t[lastLet];
                lastLet++;
            }
            cout<<s;
            for(int i = 0; i < rNeed; i++){
                cout<<t[lastLet];
                lastLet++;
            }
        }
    }
}
