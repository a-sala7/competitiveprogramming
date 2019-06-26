#include <iostream>
using namespace std;

int main()
{
	//Free Ice Cream CF686-D2-A
    int qLength, madKids = 0;
    long long packs;
    cin>>qLength>>packs;
    char op;
    long long q[qLength];
    for (int i = 0; i < qLength; i++){
        cin>>op;
        cin>>q[i];
        if(op == '+'){
            packs += q[i];
        } else {
            if(packs >= q[i]){
                packs -= q[i];
            } else {
                madKids++;
            }
        }
    }
    cout<<packs<<" "<<madKids;
}
