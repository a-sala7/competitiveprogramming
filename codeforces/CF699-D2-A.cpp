#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long n;
    cin>>n;
    long long pos[n];
    char directions[n];
    for(int i = 0; i < n; i++){
        cin>>directions[i];

    }
    for(int i = 0; i < n; i++){
        cin>>pos[i];
    }
    bool done = false;
    long long minDist;
    for(int i = 0; i < n-1; i++){
        if(!done && directions[i] == 'R' && directions[i+1] == 'L'){
            minDist = (pos[i+1]-pos[i])/2;
            done = true;
        }
        if(done && directions[i] == 'R' && directions[i+1] == 'L'){
            minDist = min(minDist, (pos[i+1]-pos[i])/2);
        }
    }
    if(done){
        cout<<minDist;
    } else {
        cout<<-1;
    }
}
