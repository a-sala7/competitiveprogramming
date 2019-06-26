#include <iostream>

using namespace std;

int main()
{
	//Valera and X CF404-D2-A
    int n;
    cin>>n;
    char c1, c2;
    bool taken1 = false;
    bool taken2 = false;
    bool earlyFail = false;
    char givenMatrix[n][n];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>givenMatrix[i][j];
            if(!taken1){
                taken1 = true;
                c1 = givenMatrix[i][j];
            }
            if(!taken2 && givenMatrix[i][j] != c1){
                taken2 = true;
                c2 = givenMatrix[i][j];
            }
            if(givenMatrix[i][j] != c1 && givenMatrix[i][j] != c2){
                earlyFail = true;
            }
        }
    }
    if(earlyFail){
        cout<<"NO";
    } else {
        bool failed = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                //diagonals
                if(i==j || i==n-j-1){
                    if(givenMatrix[i][j] != c1){
                        //cout<<"EXPECTED c1: "<<c1<<" at "<<i<<','<<j<<endl;
                        failed = true;
                        break;
                    }
                } else { //non diagonal elements
                    if(givenMatrix[i][j] != c2){
                        //cout<<"EXPECTED c2: "<<c2<<" at "<<i<<','<<j<<endl;
                        failed = true;
                        break;
                    }
                }
            }
        }
        if(failed){
            cout<<"NO";
        } else {
            cout<<"YES";
        }
    }
}