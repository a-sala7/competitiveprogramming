#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    bool right = true;
    bool printed = false;
    for(int i = 0; i < n; i++){
        printed = false;
        for(int j = 0; j < m; j++){
            //odd lines
            if(i%2==0){
                cout<<'#';
            } else if(i%2!=0){
                if(j==m-1 && right && !printed){
                    cout<<'#';
                    right = false;
                    printed = true;
                } else if (j==0 && !right && !printed){
                    cout<<'#';
                    right = true;
                    printed = true;
                } else {
                    cout<<'.';
                }
            }
        }
        cout<<endl;
    }
}
