#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //Sales 1260
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sales[n];
        long total = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &sales[i]);
            if(i!=0){
                for(int j = 0; j < i; j++){
                    if(sales[i]>=sales[j])
                        total++;
                }
            }
        }
        printf("%ld\n", total);
    }
}
