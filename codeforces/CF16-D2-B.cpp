#include <iostream>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

bool sortBySec(const pair<long,int> &a, const pair<long,int> &b){
    return (a.second > b.second);
}

int main()
{
    //Burglar and Matches CF16-D2-B
    long capacity;
    int n;
    cin>>capacity>>n;
    pair<long, int> matchboxes[n];
    for(int i = 0; i < n; i++){
        cin>>matchboxes[i].fr>>matchboxes[i].sc;
    }
    sort(matchboxes, matchboxes+n, sortBySec);
    long long carried = 0;
    long carryingNow;
    for(int i = 0; i < n; i++){
        carryingNow = min(capacity,matchboxes[i].fr);
        carried += carryingNow * matchboxes[i].sc;
        capacity -= carryingNow;
        if(capacity <= 0)
            break;
    }
    cout<<carried;
}
