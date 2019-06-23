#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    string strings[n];
    for(int i = 0; i < n; i++){
        cin>>strings[i];
    }
    int goods = 0;
    for(int i = 0; i < n; i++){
        bool currentGood = true;
        bool exists[k+1] = {false};
        for(int j = 0; j < strings[i].size(); j++){
            if(strings[i][j]-'0' < k+1)
                exists[strings[i][j]-'0'] = true;
        }
        for(int j = 0; j < k+1; j++){
            if(exists[j] == false){
                currentGood = false;
                break;
            }
        }
        if(currentGood)
            goods++;
    }
    cout<<goods;
}
