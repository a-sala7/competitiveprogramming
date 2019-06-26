#include <iostream>

using namespace std;

int main()
{
    //Playing with Dice	CF378-D2-A
    int a, b, waysA = 0, draws = 0, waysB = 0;
    cin>>a>>b;
    for(int i = 1; i <=6; i++){
        if(abs(a-i)<abs(b-i))
            waysA++;
        if(abs(a-i)==abs(b-i))
            draws++;
        if(abs(b-i)<abs(a-i))
            waysB++;
    }
    cout<<waysA<<' '<<draws<<' '<<waysB;
}
