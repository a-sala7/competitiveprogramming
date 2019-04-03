#include <iostream>

using namespace std;

int charInString(char hCharToFind, string hString){
    for (int i = 0; i < hString.size(); i++){
        if(hString[i]==hCharToFind){
            return i;
        }
    }
    return -1;
}

int main()
{
    string s;
    string vowels = "AOYEUIaoyeui";
    cin>>s;
    for (int i = 0; i < s.size(); i++){
        if(charInString(s[i], vowels) != -1){
            continue;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            char printed;
            printed = s[i] +32;
            cout<<'.'<<printed;
        } else {
            cout<<'.'<<s[i];
        }
    }
}
