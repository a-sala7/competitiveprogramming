#include <iostream>
#include <math.h>
#define ull unsigned long long

using namespace std;

int main()
{
    //Doggo Recoloring CF1025-D12-A
    long colorOccurence[123] = {0};
    bool possible = false;
    long n;
    cin>>n;
    char color;
    for(int i = 0; i < n; i++){
        cin>>color;
        colorOccurence[color]++;
    }
    int colorsExist = 0;
    for(char i = 'a'; i <= 'z'; i++){
        if(colorOccurence[i]>0)
            colorsExist++;
    }
    if(colorsExist==1)
        possible = true;
    for(char i = 'a'; i <= 'z'; i++){
        if(colorOccurence[i]>=2){
            possible = true;
        }
    }
    if(possible)
        cout<<"Yes";
    else
        cout<<"No";
}
