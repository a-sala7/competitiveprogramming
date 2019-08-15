#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define fr first
#define sc second

using namespace std;

int main()

{
    //Subsequence 1121
    long n, sum;
    while(scanf("%d %d", &n, &sum) != EOF){
        int nums[n];
        for(long i = 0; i < n; i++){
            cin>>nums[i];
        }
        long currSum = 0;
        long r = 0, l = 0;
        long len = 9999999;
        while(l < n){
            if(currSum < sum){
                currSum += nums[l];
                l++;
            }
            while(currSum >= sum){
                len = min(len, l-r);
                currSum -= nums[r];
                r++;
            }
        }
        if(len==9999999)
            cout<<0<<endl;
        else
            cout<<len<<endl;
    }
}
