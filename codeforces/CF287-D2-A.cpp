#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char pic[4][4];
    bool possible = false;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin>>pic[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(pic[i][j] == '#' && pic[i][j+1] == '#'){
                if(pic[i+1][j] == '#' || pic[i+1][j+1] == '#'){
                    possible = true;
                    break;
                }
            }
            if(pic[i+1][j] == '#' && pic[i+1][j+1] == '#'){
                if(pic[i][j] == '#' || pic[i][j+1] == '#'){
                    possible = true;
                    break;
                }
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(pic[i][j] == '.' && pic[i][j+1] == '.'){
                if(pic[i+1][j] == '.' || pic[i+1][j+1] == '.'){
                    possible = true;
                    break;
                }
            }
            if(pic[i+1][j] == '.' && pic[i+1][j+1] == '.'){
                if(pic[i][j] == '.' || pic[i][j+1] == '.'){
                    possible = true;
                    break;
                }
            }
        }
    }
    if(possible){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
