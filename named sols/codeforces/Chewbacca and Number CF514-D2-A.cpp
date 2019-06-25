#include <iostream>

using namespace std;

int main()
{
	//Chewbacca and Number CF514-D2-A
    string s;
    cin>>s;
    for(long long i = 0; i < s.size(); i++){
        if(s[i] >= '5'){
            if(i==0){
                if(char('9'-s[i]+'0')=='0'){
                    cout<<s[i];
                    continue;
                } else {
                    cout<<char('9'-s[i]+'0');
                }
            } else {
                cout<<char('9'-s[i]+'0');
            }
        } else {
            cout<<s[i];
        }
    }
}
