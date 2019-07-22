#include <iostream>

using namespace std;

int main()
{
    //Arpa's hard exam and Mehrdad's naive cheat CF742-D2-A
    long long n;
    cin>>n;
    //oops
    if(n==0){
        cout<<1;
    } //8 4 2 6 repeating pattern
    else if(n%4==1){
        cout<<8;
    }
    else if(n%4==2){
        cout<<4;
    }
    else if(n%4==3){
        cout<<2;
    }
    else if(n%4==0){
        cout<<6;
    }
}
