#include <iostream>

using namespace std;

int main()
{
    int rows;
    while(scanf("%d", &rows), rows != 0){

        int solidCellCount[rows] = {0};
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < 25; j++){
                char curr = getchar();
                if(curr == 'X'){
                    solidCellCount[i]++;
                }
            }
            cin.ignore();
            //cout<<solidCellCount[i]<<endl;
        }
        int maxi = -1;
        for (int i = 0; i < rows; i++){
            maxi = max(solidCellCount[i],maxi);
        }
        //cout<<"Max is: "<<maxi<<endl;
        //computing the empty spaces
        //empty are differences between max solid cell counts and current row's solid cell counts
        int emptySpaces = 0;
        for (int i = 0; i < rows; i++){
            emptySpaces+= maxi-solidCellCount[i];
        }
        cout<<emptySpaces<<endl;
    }
}
