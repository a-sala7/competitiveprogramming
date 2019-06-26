#include <iostream>

using namespace std;

int main()
{
	//Olesya and Rodion CF584-D2-A
    int theSize;
    string factor;
    cin>>theSize>>factor;
    if(theSize < factor.size()){
        cout<<-1;
    } else {
        if(factor[0] != '1' && factor[1] != '0'){
            for (int i = 0; i < theSize; i++){
                cout<<factor;
            }
        } else {
            cout<<1;
            for (int i = 0; i<theSize-1; i++){
                cout<<0;
            }
        }
    }
}
