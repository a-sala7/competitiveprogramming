#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Coder CF384-D2-A
    int n;
    cin>>n;
    long long coders = 0;
    if(n==1){
        cout<<1<<endl;
        cout<<'C';
    } else {
        char board[n][n] = {'.'};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i%2==0 && j%2==0){
                    board[i][j] = 'C';
                    coders++;
                } else if(i%2!=0&&j%2!=0){
                    board[i][j] = 'C';
                    coders++;
                } else {
                    board[i][j] = '.';
                }
            }
        }
        cout<<coders<<endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<board[i][j];
            }
            cout<<endl;
        }
    }
}
