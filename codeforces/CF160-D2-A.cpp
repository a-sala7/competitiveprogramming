#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int coins[n];
    float total = 0;
    for (int i = 0; i < n; i++){
       cin>>coins[i];
       total+=coins[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if(coins[j]<coins[j+1])
                swap(coins[j],coins[j+1]);
        }
    }
    float req = total/2;
    int mine = 0;
    int coinsTaken = 0;
    for (int i = 0; i < n; i++){
        if(mine > req)
            break;
        mine+=coins[i];
        coinsTaken++;
    }
    cout<<coinsTaken;
}
