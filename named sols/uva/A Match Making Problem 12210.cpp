#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //A Match Making Problem 12210
    int b, s;
    int c = 1;
    cin>>b>>s;
    while(b&&s){
        int bachs[b], spins[s];
        for(int i = 0; i < b; i++)
            cin>>bachs[i];
        for(int i = 0; i < s; i++)
            cin>>spins[i];
        if(b<=s){
            printf("Case %d: 0\n", c);
        } else {
            sort(bachs, bachs+b);
            printf("Case %d: %d %d\n", c, b-s, bachs[0]);
        }
        c++;
        cin>>b>>s;
    }
}
