#include <iostream>

using namespace std;

int main()
{
    //Far Relatives Birthday Cake CF629-D2-A
    int n;
    cin>>n;
    char cake[n][n];
    int rowCs[n] = {0}, columnCs[n] = {0};
    long long happiness = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>cake[i][j];
            if(cake[i][j]=='C'){
                rowCs[i]++;
                columnCs[j]++;
            }
        }
    }
    /*cout<<"Row chocolates: ";
    for (int i = 0; i < n; i++){
        cout<<rowCs[i]<<' ';
    }
    cout<<"Column chocolates: ";
    for (int i = 0; i < n; i++){
        cout<<columnCs[i]<<' ';
    }*/
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(cake[i][j] == 'C'){
                    //search for pairs ahead in row
                    for(int k = j+1; k < n; k++){
                        if(cake[i][k] == 'C')
                            happiness++;
                    }
                    //search for pairs ahead in column
                    for(int k = i+1; k < n; k++){
                        if(cake[k][j] == 'C')
                            happiness++;
                    }
            }
        }
    }
    cout<<happiness;
}
