#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define fr first
#define sc second

using namespace std;

int main()

{
    //Hajj-e-Akbar 12577
    int n = 1;
    string s;
    cin>>s;
    if(s=="Hajj")
        cout<<"Case "<<n<<": Hajj-e-Akbar\n";
    else if(s=="Umrah")
        cout<<"Case "<<n<<": Hajj-e-Asghar\n";
    cin>>s;
    n++;
    while(s!="*"){
        if(s=="Hajj")
            cout<<"Case "<<n<<": Hajj-e-Akbar\n";
        else if(s=="Umrah")
            cout<<"Case "<<n<<": Hajj-e-Asghar\n";
        cin>>s;
        n++;
    }
}
