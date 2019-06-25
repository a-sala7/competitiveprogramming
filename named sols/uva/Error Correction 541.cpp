#include <iostream>

using namespace std;

int main()
{
	//Error Correction 541
    int matrixSize;
    while(scanf("%d", &matrixSize), matrixSize){
        int myMatrix[matrixSize][matrixSize];
        int colSums[matrixSize] = {0};
        int rowSums[matrixSize] = {0};
        for (int i = 0; i < matrixSize; i++){
            for (int j = 0; j < matrixSize; j++){
                cin>>myMatrix[i][j];
                colSums[i]+= myMatrix[i][j];
                rowSums[j]+= myMatrix[i][j];
            }
        }
        bool ok = true;
        int oddCol = 0;
        int oddRow = 0;
        int critCol, critRow;
        for (int i = 0; i < matrixSize; i++){
            if(colSums[i]%2 != 0){
                ok = false;
                oddCol++;
                critCol = i+1;
            }
            if(rowSums[i]%2 != 0){
                ok = false;
                oddRow++;
                critRow = i+1;
            }
        }
        if(ok){
            cout<<"OK"<<endl;
        } else if(oddCol == 1 && oddRow == 1){
            cout<<"Change bit ("<<critCol<<','<<critRow<<")"<<endl;
        } else {
            cout<<"Corrupt"<<endl;
        }
    }
}
