#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define fr first
#define sc second

using namespace std;

int countTypes(long arr[]){
    int types = 0;
    for(int i = 'A'; i <= 'Z'; i++){
        if(arr[i]>0)
            types++;
    }
    for(int i = 'a'; i <= 'z'; i++){
        if(arr[i]>0)
            types++;
    }
    return types;
}

int main()

{
    //They Are Everywhere CF364-D2-C
    //A = 65, Z = 90, a = 97, z = 122
    long n;
    cin>>n;
    char s[n];
    if(n==1){
        cout<<1;
    } else {
        long typesGot[123] = {0};
        for(int i = 0; i < n; i++){
            cin>>s[i];
            typesGot[s[i]]++;
        }
        int req = countTypes(typesGot);
        for(int i = 0; i < 123; i++){
            typesGot[i] = 0;
        }
        long r = 0, l = 0;
        long curr = 0;
        long ans = 9999999;
        while(l < n){
            if(curr<req){
                typesGot[s[l]]++;
                if(typesGot[s[l]]==1)
                    curr++;
                l++;
            }
            while(curr == req && r < n){
                ans = min(ans, l-r);
                typesGot[s[r]]--;
                if(typesGot[s[r]]==0)
                    curr--;
                r++;
            }
        }
        cout<<ans;
    }
}
