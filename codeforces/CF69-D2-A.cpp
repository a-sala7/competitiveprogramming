#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int forces[n][3];
    int sums[3] = {0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin>>forces[i][j];
            sums[j] += forces[i][j];
        }
    }
    bool isEq = true;
    for (int i = 0; i < 3; i++){
        if(sums[i] != 0){
            isEq = false;
            break;
        }
    }
    if(isEq){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}

