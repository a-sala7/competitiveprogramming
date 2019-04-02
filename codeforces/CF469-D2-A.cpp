#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool passable[n+1] = {false};
    int player1;
    cin>>player1;
    for (int i = 0; i < player1; i++){
        int x;
        cin>>x;
        passable[x] = true;
    }
    int player2;
    cin>>player2;
    for (int i = 0; i < player2; i++){
        int x;
        cin>>x;
        passable[x] = true;
    }
    bool winner = true;
    for (int i = 1; i < n+1; i++){
        if(passable[i] == false){
            winner = false;
            break;
        }
    }
    if(winner){
        cout<<"I become the guy.";
    } else {
        cout<<"Oh, my keyboard!";
    }
}
