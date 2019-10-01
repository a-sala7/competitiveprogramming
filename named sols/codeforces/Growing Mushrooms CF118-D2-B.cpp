#include <iostream>
#include <algorithm>
#define fr first
#define sc second
using namespace std;

double reduced(double num, int reduction){
    return num - num*reduction/100;
}

bool areEqual(double a, double b){
    return (abs(a-b)<0.009);
}

int main()
{
    //Growing Mushrooms CF118-D2-B
    int n, t1, t2, k;
    cin>>n>>t1>>t2>>k;
    pair<double, int> dwarves[n];
    double a, b;
    for(int i = 0; i < n; i++){
        dwarves[i].sc = i;
        cin>>a>>b;
        //max of (speed1*time1 + reduced speed2*time2),(speed2*time1 + reduced speed1*time2)
        //dwarves[i].fr = max(a*t1 + reduced(b, k)*t2, b*t1 + reduced(a, k)*t2);
        //nope, fixing it
        dwarves[i].fr = max(reduced(a, k)*t1 + b*t2, reduced(b, k)*t1 + a*t2);
    }
    sort(dwarves, dwarves+n);
    reverse(dwarves, dwarves+n);
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(areEqual(dwarves[i].fr,dwarves[j].fr) && dwarves[i].sc > dwarves[j].sc){
                swap(dwarves[i].sc, dwarves[j].sc);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d %.2f\n", dwarves[i].sc+1, dwarves[i].fr);
    }
}
