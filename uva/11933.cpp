#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    //Splitting Numbers 11933
    long n;
    cin>>n;
    while(n!=0){
        bitset<32> num (n);
        bitset<32> a;
        bitset<32> b;
        bool flipped = false;
        for(int i = 0; i < 32; i++){
            if(num[i]==1){
                if(!flipped){
                    a[i] = num[i];
                    flipped = true;
                } else {
                    b[i] = num[i];
                    flipped = false;
                }
            }
        }
        cout<<a.to_ulong()<<' '<<b.to_ulong()<<endl;
        cin>>n;
    }
}
