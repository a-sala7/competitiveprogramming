#include <iostream>

using namespace std;

int main()
{
    //Triangular numbers CF47-D2-A
    int x;
    cin>>x;
    /*for(int i = 1; i < 33; i++){
        cout<<(i*(i+1))/2<<endl;
    }*/
    bool tri = false;
    for(int i = 1; i < 33; i++){
        if(x == (i*(i+1))/2){
            tri = true;
            break;
        }
    }
    if(tri)
        cout<<"YES";
    else
        cout<<"NO";
}
