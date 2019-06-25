#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//Lineland Mail CF567-D2-A
    long int n;
    cin>>n;
    long long int cities[n];
    for (long int i = 0; i < n; i++){
        cin>>cities[i];
    }
    for (long int i = 0; i < n; i++){
        long long mini;
        long long maxi;
        if(i == 0){
            mini = abs(cities[0]-cities[1]);
            maxi = abs(cities[0]-cities[n-1]);
        } else if(i == (n-1)){
            mini = abs(cities[n-1]-cities[n-2]);
            maxi = abs(cities[0]-cities[n-1]);
        } else {
            mini = min(abs(cities[i]-cities[i-1]),abs(cities[i]-cities[i+1]));
            maxi = max(abs(cities[i]-cities[n-1]),abs(cities[i]-cities[0]));
        }
        cout<<mini<<" "<<maxi<<endl;
        /*
        long long maxi = 0;
        long long mini = 2*pow(10,9)+1;
        for (long int j = 0; j < n; j++){
            if(i!=j){
                maxi = max(maxi,abs(cities[i]-cities[j]));
                mini = min(mini,abs(cities[i]-cities[j]));
            }
        }
        cout<<mini<<" "<<maxi<<endl;*/
    }
}
