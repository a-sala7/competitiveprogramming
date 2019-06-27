#include <iostream>
#include <queue>

using namespace std;

int main()
{
    //Cards CF701-D2-A
    int n;
    cin>>n;
    int cards[n];
    int sum = 0;
    int reqPerPlayer;
    for(int i = 0; i < n; i++){
        cin>>cards[i];
        sum+=cards[i];
    }
    queue <int> ans;
    bool taken[n] = {false};
    reqPerPlayer = sum/(n/2);
    for(int i = 0; i < n/2; i++){
        bool done = false;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(j!=k && !taken[j] && !taken[k] && cards[j]+cards[k] == reqPerPlayer){
                    ans.push(j);
                    taken[j] = true;
                    ans.push(k);
                    taken[k] = true;
                    done = true;
                    break;
                }
            }
            if(done)
                break;
        }
    }
    while(!ans.empty()){
        cout<<ans.front()+1<<' ';
        ans.pop();
        cout<<ans.front()+1<<endl;
        ans.pop();
    }
}
