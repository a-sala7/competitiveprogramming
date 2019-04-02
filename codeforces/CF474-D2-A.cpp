#include <iostream>

using namespace std;

int charInString(char ccc, string sss){
    for (int i = 0; i < sss.size(); i++){
        if(sss[i]==ccc){
            return i;
        }
    }
    return -1;
}

int main()
{
    char shift;
    string text;
    string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin>>shift>>text;
    if(shift == 'R'){
        for (int i = 0; i < text.size(); i++){
            cout<<k[charInString(text[i], k)-1];
        }
    } else if(shift == 'L'){
        for (int i = 0; i < text.size(); i++){
            cout<<k[charInString(text[i], k)+1];
        }
    }
}
