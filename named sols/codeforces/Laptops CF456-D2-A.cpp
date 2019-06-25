#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
	//Laptops CF456-D2-A
    long n;
    cin>>n;
    long price[n], quality[n];
    for(int i = 0; i < n; i++){
        cin>>price[i]>>quality[i];
    }
    bool found = false;
    for(int i = 0; i < n; i++){
        if(price[i]!=quality[i]){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Happy Alex";
    } else {
        cout<<"Poor Alex";
    }
}
