#include <iostream>
#include <algorithm>
#define ull unsigned long long
#define fr first
#define sc second
using namespace std;

int main()
{
    //Songs Compression CF501-D3-C
    long n, cap;
    cin>>n>>cap;
    pair<long, long> songs[n];
    long diff[n];
    ull mini = 0;
    for(int i = 0; i < n; i++){
        cin>>songs[i].fr>>songs[i].sc;
        mini += songs[i].sc;
        diff[i] = songs[i].fr - songs[i].sc;
    }
    if(mini > cap)
        cout<<-1;
    else if(mini==cap){
        cout<<n;
    } else {
        sort(diff, diff+n);
        long uncompressed = 0;
        for(int i = 0; i < n; i++){
            mini+=diff[i];
            uncompressed++;
            if(mini>cap){
                uncompressed--;
                break;
            }
            if(mini==cap){
                break;
            }
        }
        cout<<n-uncompressed;
    }
}
