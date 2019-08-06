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
    //George and Round CF387-D2-B
    int n, p;
    cin>>n>>p;
    long needed[n], prepared[p];
    for(int i = 0; i < n; i++){
        cin>>needed[i];
    }
    for(int i = 0; i < p; i++){
        cin>>prepared[i];
    }
    sort(needed,needed+n);
    sort(prepared,prepared+p);
    int needMore = 0;
    bool found;
    for(int i = 0; i < n; i++){
        found = false;
        for(int j = 0; j < p; j++){
            if(prepared[j]>=needed[i]){
                found = true;
                prepared[j] = 0;
                break;
            }
        }
        if(!found){
            needMore++;
        }
    }
    cout<<needMore;
}
