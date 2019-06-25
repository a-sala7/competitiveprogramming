#include <iostream>

using namespace std;

int main()
{
	//Accomodation CF467-D2-A
    int n;
    cin>>n;
    int residents[n], capacity[n];
    int suitable = 0;
    for(int i = 0; i < n; i++){
        cin>>residents[i]>>capacity[i];
        if(capacity[i]-residents[i] >= 2)
            suitable++;
    }
    cout<<suitable;
}
