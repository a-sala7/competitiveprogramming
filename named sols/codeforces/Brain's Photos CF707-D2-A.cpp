#include <iostream>

using namespace std;

int main()
{
	//Brain's Photos CF707-D2-A
    int n, m;
    cin>>n>>m;
    char myMatrix[n][m];
    bool colors = false;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>myMatrix[i][j];
            if(myMatrix[i][j] != 'B' && myMatrix[i][j] != 'W' && myMatrix[i][j] != 'G'){
                colors = true;
            }
        }
    }
    if(colors)
        cout<<"#Color";
    else
        cout<<"#Black&White";
}
