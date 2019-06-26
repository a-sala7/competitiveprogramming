#include <iostream>

using namespace std;

int main()
{
	//Bit++ CF282-D2-A
    int n, x = 0;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++){
        cin>>s;
        if(s == "X++" || s == "++X"){
            x++;
        } else {
            x--;
        }
    }
    cout<<x;
}