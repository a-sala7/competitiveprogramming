#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define fr first
#define sc second

using namespace std;

int main()

{
    //Division of Nlogonia 11498
    int q;
    cin>>q;
    while(q != 0){
        int divX,divY, queryX, queryY;
        cin>>divX>>divY;
        for(int i = 0; i < q; i++){
            cin>>queryX>>queryY;
            if(queryX==divX || queryY == divY){
                cout<<"divisa"<<endl;
            } else if (queryY > divY){
                if(queryX>divX){
                    cout<<"NE"<<endl;
                } else if(queryX<divX){
                    cout<<"NO"<<endl;
                }
            } else if (queryY < divY){
                if(queryX>divX){
                    cout<<"SE"<<endl;
                } else if(queryX<divX){
                    cout<<"SO"<<endl;
                }
            }
        }
        cin>>q;
    }
}
