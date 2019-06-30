#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    //Sasha and Magnetic Machines CF1113-D2-B
    long n;
    cin>>n;
    int power[n];
    for(long i = 0; i < n; i++){
        cin>>power[i];
    }
    sort(power, power+n);
    long initialSum = accumulate(power, power+n, 0);
    vector <long> effects;
    bool affected = false;
    for(long i = n-1; i >= 0; i--){
        long currEffect = -1;
        for(int j = 2; j*j <= power[i]; j++){
            if(power[i]%j==0 && power[i]+power[0] > power[i]/j + power[0]*j){
                if(power[i]+power[0]-power[i]/j-power[0]*j > currEffect){
                    currEffect = power[i]+power[0]-power[i]/j-power[0]*j;
                }
            }
        }
        if(currEffect!=-1){
            effects.push_back(currEffect);
            affected = true;
        }
    }
    if(affected){
        cout<<initialSum-*max_element(effects.begin(), effects.end());
    } else {
        cout<<initialSum;
    }
}
