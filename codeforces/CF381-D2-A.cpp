#include <iostream>
#include <math.h>
#include <bitset>
#include <algorithm>
#define ll long long
#define fr first
#define sc second
using namespace std;

int main()
{
    //Seraja and Dima CF381-D2-A
    int n;
    cin>>n;
    int cards[n];
    for(int i = 0; i < n; i++){
        cin>>cards[i];
    }
    int r = 0, l = n-1;
    int aScore = 0, bScore = 0;
    while(r<=l){
        if(r<=l){
            if(cards[r]>=cards[l]){
            aScore += cards[r];
            r++;
            } else {
                aScore += cards[l];
                l--;
            }
        }
        if(r<=l){
            if(cards[r]>=cards[l]){
            bScore += cards[r];
            r++;
            } else {
                bScore += cards[l];
                l--;
            }
        }
    }
    cout<<aScore<<' '<<bScore;
}
