#include <iostream>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
    //Nearest Interesting Number CF1183-D3-A
    int a;
    cin>>a;
    for(int i = a; i <= 1003; i++){
        string currNum = to_string(i);
        int currSum = 0;
        for(int j = 0; j < currNum.size(); j++){
            currSum+=currNum[j];
        }
        if(currSum%4==0){
            cout<<i;
            break;
        }
    }
}