#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

bool binarySearch(long arr[], long x, int rangeStart, int rangeEnd){
    if(rangeEnd < rangeStart){
        //printf("Key not found.\n");
        return false;
    } else {
        int midp = (rangeStart + rangeEnd)/2;
        if(arr[midp] > x) {
            //printf("At %d, key is below me, looking from %d to %d.\n", midp, rangeStart, midp-1);
            return binarySearch(arr, x, rangeStart, midp-1);
        } else if(arr[midp] < x) {
            //printf("At %d, key is above me, looking from %d to %d.\n", midp, midp+1, rangeEnd);
            return binarySearch(arr, x, midp+1, rangeEnd);
        } else {
            //printf("Key found at %d!\n", midp);
            return true;
        }
    }
}

int main()
{
    //Exact Sum 11057
    int n;
    while(scanf("%d", &n) != EOF){
        long prices[n];
        for(int i = 0; i < n; i++)
            cin>>prices[i];
        long total, target;
        cin>>total;
        sort(prices, prices+n);
        pair<long, long> ans;
        long diff = 9999999;
        for(int i = 0; i < n; i++){
            target = total - prices[i];
            if(total/2 == prices[i] && total%2 == 0){
                if(binarySearch(prices, target, 0, i-1) || binarySearch(prices, target, i+1, n)){
                    if(abs(prices[i]-target) < diff){
                        diff = abs(prices[i]-target);
                        ans.fr = min(prices[i],target);
                        ans.sc = max(prices[i],target);
                    }
                }
            } else if(binarySearch(prices, target, 0, n)){
                if(abs(prices[i]-target) < diff){
                    diff = abs(prices[i]-target);
                    ans.fr = min(prices[i],target);
                    ans.sc = max(prices[i],target);
                }
            }
        }
        printf("Peter should buy books whose prices are %ld and %ld.\n", ans.fr, ans.sc);
        cout<<endl;
    }
}
