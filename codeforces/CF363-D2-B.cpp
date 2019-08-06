#include <iostream>
#include <math.h>
#include <bitset>
#include <algorithm>
#define ll long long
#define fr first
#define sc second
using namespace std;

int main()
{
    //Fence CF363-D2-B
    long n, k;
    cin>>n>>k;
    int planks[n];
    for(int i = 0; i < n; i++){
        cin>>planks[i];
    }
    pair<long, long> sumAndPos = {0,0};
    for(int i = 0; i < k; i++){
        sumAndPos.fr+=planks[i];
    }
    long p1 = 0, p2 = k-1;
    long currSum = sumAndPos.fr;
    while(true){
        currSum -= planks[p1];
        p1++;
        if(p2<n-1){
            p2++;
            currSum += planks[p2];
        } else {
            break;
        }
        if(sumAndPos.fr > currSum){
            sumAndPos.fr = currSum;
            sumAndPos.sc = p1;
        }
    }
    cout<<sumAndPos.sc+1;
}
