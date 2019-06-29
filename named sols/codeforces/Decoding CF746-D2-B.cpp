#include <iostream>

using namespace std;

int main()
{
    //Decoding CF746-D2-B
    int n;
    string s;
    cin>>n>>s;
    //odd
    if(n%2!=0){
        //print maxEven--
        for(int i = n-2; i > 0; i-=2){
            cout<<s[i];
        }
        //print minOdd++
        for(int i = 0; i < n; i+=2){
            cout<<s[i];
        }
    }
    //even
    if(n%2==0){
        //print maxOdd--
        for(int i = n-2; i >= 0; i-=2){
            cout<<s[i];
        }
        //print minEven++
        for(int i = 1; i < n; i+=2){
            cout<<s[i];
        }
    }
}
