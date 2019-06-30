#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    //Equalize Prices CF1183-D3-B
    queue <long> ans;
    int q;
    cin>>q;
    for(int i = 0; i < q; i++){
        int n;
        long limit;
        cin>>n>>limit;
        long products[n];
        for(int i = 0; i < n; i++){
            cin>>products[i];
        }
        sort(products,products+n);
        if(products[n-1]-products[0] > limit*2){
            ans.push(-1);
        } else {
            ans.push(products[0]+limit);
        }
    }
    for(int i = 0; i < q; i++){
        cout<<ans.front()<<endl;
        ans.pop();
    }
}
