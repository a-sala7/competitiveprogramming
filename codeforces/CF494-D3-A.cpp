#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    //Polycarp's Pockets CF494-D3-A
    int freq[101] = {0};
    int n;
    cin>>n;
    int coin;
    for(int i = 0; i < n; i++){
        cin>>coin;
        freq[coin]++;
    }
    cout<<*max_element(freq, freq+101);
}
