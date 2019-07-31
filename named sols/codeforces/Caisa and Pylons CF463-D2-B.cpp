#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ull unsigned long long
#define all(v) v.begin(), v.end()

using namespace std;

int main()
{
    //Caisa and Pylons CF463-D2-B
    long n;
    cin>>n;
    long heights[n+1];
    heights[0] = 0;
    for(int i = 1; i < n+1; i++){
        cin>>heights[i];
    }
    long long energy = 0;
    long currCost = 0;
    long long moneySpent = 0;
    for(int i = 0; i < n; i++){
        currCost = heights[i] - heights[i+1];
        energy += currCost;
        if(energy<0){
            moneySpent += 0-energy;
            energy = 0;
        }
    }
    cout<<moneySpent;
}
