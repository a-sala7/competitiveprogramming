#include <iostream>

using namespace std;

int main()
{
    //Roma and Lucky Numbers CF262-D2-A
    int n, limit;
    cin>>n>>limit;
    long long nums[n];
    int luckies = 0;
    for(int i = 0; i < n; i++){
        int currLucky = 0;
        cin>>nums[i];
        string s = to_string(nums[i]);
        for(int j = 0; j < s.size(); j++){
            if(s[j]=='4'||s[j]=='7'){
                currLucky++;
            }
        }
        if(currLucky<=limit){
            luckies++;
        }
    }
    cout<<luckies;
}
