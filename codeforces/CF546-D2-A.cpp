#include <iostream>

using namespace std;

int main()
{
	//Soldier and Bananas CF546-D2-A
    long long cost, had;
    int nBananas;
    cin>>cost>>had>>nBananas;
    long long paid = 0;
    for(int i = 1; i <= nBananas; i++){
        paid+=i*cost;
    }
    if(paid > had){
        cout<<paid-had;
    } else {
        cout<<0;
    }
}
