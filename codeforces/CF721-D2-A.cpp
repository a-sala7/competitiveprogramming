#include <iostream>

using namespace std;

int main()
{
	//One-dimensional Japanese Crossword CF721-D2-A
    int n;
    string s;
    cin>>n>>s;
    int intCount = 0;
    int bCount = 0;
    string t;
    for(int i = 0; i < n; i++){
        if(i==n-1&&s[i]=='B'){
            intCount++;
            bCount++;
            t+=to_string(bCount);
        } else if(s[i] == 'W'){
            if(bCount>0){
                t+=to_string(bCount);
                t+=' ';
                intCount++;
            }
            bCount = 0;
        } else {
            bCount++;
        }
    }
    if(t.size()==0){
        cout<<intCount;
    } else {
        cout<<intCount<<endl<<t;
    }
}
