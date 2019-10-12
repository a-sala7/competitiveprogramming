#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Middle of the Contest CF544-D3-A
    int h1, m1, h2, m2;
    char c;
    cin>>h1>>c>>m1>>h2>>c>>m2;
    int t1, t2;
    t1 = (h1*60)+m1;
    t2 = (h2*60)+m2;
    int mp = (t1+t2)/2;
    int h3, m3;
    h3 = mp/60;
    m3 = mp%60;
    if(to_string(h3).size() == 1){
        cout<<0<<h3<<':';
    } else {
        cout<<h3<<':';
    }
    if(to_string(m3).size() == 1){
        cout<<0<<m3;
    } else {
        cout<<m3;
    }
}
