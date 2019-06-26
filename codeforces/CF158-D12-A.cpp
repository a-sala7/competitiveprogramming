#include <iostream>
#include <queue>

using namespace std;

int main()
{
	//Next Round CF158-D12-A
    int n, pos;
    cin>>n>>pos;
    int scores[n];
    for (int i = 0; i < n; i++){
       cin>>scores[i];
    }
    int advancing = 0;
    int target = scores[pos-1];
    for (int i = 0; i < n; i++){
        if(scores[i] > 0 && scores[i] >= target){
            advancing++;
        }
    }
    cout<<advancing;
}

