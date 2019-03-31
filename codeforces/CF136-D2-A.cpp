#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int givenArray[n];
    for (int i = 0; i < n; i++){
        cin>>givenArray[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(givenArray[j] == i+1){
                cout<<j+1<<" ";
            }
        }
    }
}
