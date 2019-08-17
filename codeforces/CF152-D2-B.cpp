#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define fr first
#define sc second
#define ll long long

using namespace std;

int main()

{
    //Steps CF152-D2-B
    ll x, y;
    pair<ll, ll> pos;
    cin>>x>>y>>pos.fr>>pos.sc;
    int n;
    cin>>n;
    pair<ll, ll> vectors[n];
    ll xSpace, ySpace, xSteps, ySteps;
    ll stepsTaken = 0;
    for(int i = 0; i < n; i++){
        cin>>vectors[i].fr>>vectors[i].sc;
        if(vectors[i].fr>0){
            xSpace = x-pos.fr;
            xSteps = xSpace/vectors[i].fr;
        } else if (vectors[i].fr<0) {
            xSpace = pos.fr-1;
            xSteps = -(xSpace/vectors[i].fr);
        } else {
            xSteps = 1000000001;
        }
        if(vectors[i].sc>0){
            ySpace = y-pos.sc;
            ySteps = ySpace/vectors[i].sc;
        } else if (vectors[i].sc<0) {
            ySpace = pos.sc-1;
            ySteps = -(ySpace/vectors[i].sc);
        } else {
            ySteps = 1000000001;
        }
        if(xSteps < ySteps){
            pos.fr += (xSteps*vectors[i].fr);
            pos.sc += (xSteps*vectors[i].sc);
            stepsTaken += xSteps;
        } else {
            pos.fr += (ySteps*vectors[i].fr);
            pos.sc += (ySteps*vectors[i].sc);
            stepsTaken += ySteps;
        }
    }
    //cout<<pos.fr<<' '<<pos.sc<<endl;
    cout<<stepsTaken;
}
