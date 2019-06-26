#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //Second Order Statistics CF22-D2-A
    int n;
    cin>>n;
    int nums[n];
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    sort(nums,nums+n);
    bool found = false;
    for(int i = 0; i < n-1; i++){
        if(nums[i]!=nums[i+1]){
            found = true;
            cout<<nums[i+1];
            break;
        }
    }
    if(!found){
        cout<<"NO";
    }
}
