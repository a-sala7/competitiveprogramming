#include <iostream>

using namespace std;

int main()
{
    //Levko and Table CF361-D2-A
    int n, limit;
    cin>>n>>limit;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==j)
                cout<<limit<<' ';
            else
                cout<<0<<' ';
        }
        cout<<endl;
    }

}
