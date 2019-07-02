#include <iostream>
#include <queue>
#define ull unsigned long long
 
using namespace std;
 
int main()
{
    //Good Array CF1077-D3-C
    long n;
    cin>>n;
    long nums[n];
    ull sum = 0;
    ull sumsWithoutMe[n];
    bool numExists[1000001] = {0};
    bool numExistsTwice[1000001] = {0};
    long goods = 0;
    queue <long> ans;
    for(int i = 0; i < n; i++){
        cin>>nums[i];
        if(numExists[nums[i]]){
            numExistsTwice[nums[i]] = true;
        } else {
            numExists[nums[i]] = true;
        }
        sum+=nums[i];
    }
    for(int i = 0; i < n; i++){
        sumsWithoutMe[i] = sum-nums[i];
    }
    for(int i = 0; i < n; i++){
        if(sumsWithoutMe[i]<2000002){
            bool flipped = false;
            if(!numExistsTwice[nums[i]]){
                numExists[nums[i]] = false;
                flipped = true;
            }
            if(sumsWithoutMe[i]%2==0 && numExists[sumsWithoutMe[i]/2]){
                goods++;
                ans.push(i+1);
            }
            if(flipped)
                numExists[nums[i]] = true;
        }
    }
    cout<<goods<<endl;
    for(int i = 0; i < goods; i++){
        printf("%d ", ans.front());
        ans.pop();
    }
}