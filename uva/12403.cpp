#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define fr first
#define sc second

using namespace std;

int main()

{
    //Save Setu 12403
    int q;
    cin>>q;
    string s;
    long acc = 0;
    for(int i = 0; i < q; i++){
        cin>>s;
        if(s=="donate"){
            long m;
            cin>>m;
            acc+=m;
        }
        if(s=="report")
            cout<<acc<<endl;
    }
}
