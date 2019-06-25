#include <iostream>

using namespace std;

int main()
{
	//Elephant CF617-D2-A
    long long n;
    cin>>n;
    if(n%5==0){
        cout<<n/5;
    } else {
        cout<<(n/5)+1;
    }
}
