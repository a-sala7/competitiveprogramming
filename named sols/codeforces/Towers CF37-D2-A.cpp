#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    //Towers CF37-D2-A
    int n;
    cin>>n;
    int sticks[n];
    int towers[1000] = {0};
    for(int i = 0; i < n; i++){
        cin>>sticks[i];
        towers[sticks[i]]++;
    }
    int maxHeight = 0;
    int numTowers = 0;
    for(int i = 0; i < 1000; i++){
        if(towers[i]>0)
            numTowers++;
        maxHeight = max(maxHeight,towers[i]);
    }
    cout<<maxHeight<<' '<<numTowers;
}
