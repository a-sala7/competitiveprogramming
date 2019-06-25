#include <iostream>

using namespace std;

int main()
{
	//Even Odds CF318-D2-A
    long long numOfInts, target, targetValue;
    cin>>numOfInts>>target;
    //EVEN
    if(numOfInts%2 == 0 && target > numOfInts/2){
        targetValue = 2*(target-numOfInts/2);
    }
    //ODD
    else
    {
        if(target <= (numOfInts/2) + 1){
            targetValue = 2*target-1;
        } else {
            targetValue = 2*(target-numOfInts/2-1);
        }
    }
    cout<<targetValue<<endl;
}