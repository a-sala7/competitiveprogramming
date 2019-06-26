#include <iostream>

using namespace std;

int main()
{
    //Mashmokh and Lights CF415-D2-A
    int n, b;
    cin>>n>>b;
    int btns[b];
    int lightsOffFirstBy[n] = {0};
    for(int i = 0; i < b; i++){
        cin>>btns[i];
        for(int j = btns[i]-1; j < n; j++){
            if(lightsOffFirstBy[j] == 0)
                lightsOffFirstBy[j] = btns[i];
        }
    }
    for(int i = 0; i < n; i++){
        cout<<lightsOffFirstBy[i]<<' ';
    }
}
