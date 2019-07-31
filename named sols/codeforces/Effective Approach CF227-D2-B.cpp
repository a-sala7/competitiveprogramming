#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Effective Approach CF227-D2-B
    long n;
    cin>>n;
    long arr[100001] = {0};
    long value;
    for(long i = 0; i < n; i++){
        cin>>value;
        arr[value] = i;
    }
    long q;
    cin>>q;
    long queries[q];
    long long aComps = 0;
    long long bComps = 0;
    for(long i = 0; i < q; i++){
        cin>>queries[i];
        //printf("A made %d comparisons to find %d\n", arr[queries[i]]+1, queries[i]);
        //printf("B made %d comparisons to find %d\n", n-arr[queries[i]], queries[i]);
        aComps += arr[queries[i]]+1;
        bComps += n-arr[queries[i]];
    }
    cout<<aComps<<' '<<bComps;
}
