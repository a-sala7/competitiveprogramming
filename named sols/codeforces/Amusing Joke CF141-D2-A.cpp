#include <iostream>

using namespace std;

int main()
{
    //Amusing Joke CF141-D2-A
    int letters[91] = {0};
    string a,b,c;
    cin>>a>>b>>c;
    bool identical = true;
    for(int i = 0; i < a.size(); i++){
        letters[a[i]]++;
    }
    for(int i = 0; i < b.size(); i++){
        letters[b[i]]++;
    }
    for(int i = 0; i < c.size(); i++){
        letters[c[i]]--;
    }
    for(char i = 'A'; i <= 'Z'; i++){
        if(letters[i]!=0){
            identical = false;
            //cout<<"Failed at "<<(char)i<<" where it's occ: "<<letters[i]<<endl;
        }
    }
    if(identical)
        cout<<"YES";
    else
        cout<<"NO";
}
