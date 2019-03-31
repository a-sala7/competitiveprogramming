#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++){
        cin>>s[i];
    }
    for (int i = 0; i < n; i++){
        string curr = s[i];
        if(curr.size() <= 10){
            cout<<curr<<endl;
            continue;
        }
        cout<<curr[0]<<curr.size()-2<<curr[curr.size()-1]<<endl;
    }
}