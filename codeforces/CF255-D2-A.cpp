#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//Greg's Workout CF255-D2-A
    int n;
    cin>>n;
    int exercises[n+1];
    int chest = 0;
    int biceps = 0;
    int backk = 0;
    for(int i = 1; i < n+1; i++){
        cin>>exercises[i];
        if(i%3==1){
            chest+=exercises[i];
        } else if(i%3==2){
            biceps+=exercises[i];
        } else if(i%3==0){
            backk+=exercises[i];
        }
    }
    int bestMuscle = max(chest,max(backk,biceps));
    if(bestMuscle == chest){
        cout<<"chest";
    } else if (bestMuscle == backk){
        cout<<"back";
    } else {
        cout<<"biceps";
    }
}
