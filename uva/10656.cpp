#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //Maximum Sum (II) 10656
    int n;
    cin>>n;
    while(n){
        long sum = 0;
        int a;
        vector<int> ints;
        ints.reserve(n);
        for(int i = 0; i < n; i++){
            cin>>a;
            if(a)
                ints.push_back(a);
            sum += a;
        }
        if(sum!=0){
            n = ints.size();
            for(int i = 0; i < n; i++){
                if(i<n-1)
                    printf("%d ", ints[i]);
                else
                    printf("%d", ints[i]);
            }
            cout<<endl;
        } else {
            cout<<0<<endl;
        }
        cin>>n;
    }
}
