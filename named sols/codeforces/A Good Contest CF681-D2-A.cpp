#include <iostream>

using namespace std;

int main()
{
    //A Good Contest CF681-D2-A
    int n;
    cin>>n;
    int ratingBefore[n], ratingAfter[n];
    string name;
    bool good = false;
    for(int i = 0; i < n; i++){
        cin>>name>>ratingBefore[i]>>ratingAfter[i];
        if(ratingBefore[i] > ratingAfter[i] && ratingBefore[i] >= 2400){
            good = true;
        }
    }
    if(good)
        cout<<"YES";
    else
        cout<<"NO";
}
