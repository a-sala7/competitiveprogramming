#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//Little Pony and Crystal Mine CF454-D2-A
    //reference
    //int x = 11;
    //cout<<ceil((float)x/2);
    int n;
    cin>>n;
    bool increasing = true;
    int numberDs = 1;
    int middle = ceil((float)n/2) - 1;
    for(int i = 0; i < n; i++){
        if(i==middle){
            increasing = false;
        }
        for(int j = 0; j < n; j++){
            if(j==middle){
                cout<<'D';
            } else if(j >= middle - (numberDs/2) && j <= middle + (numberDs/2)){
                cout<<'D';
            } else {
                cout<<'*';
            }
        }
        if(increasing){
            numberDs+=2;
        } else {
            numberDs-=2;
        }
        cout<<endl;
    }
}
