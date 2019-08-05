#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    //Fedor and New Game CF467-D2-B
    int bits, numPlayers, maxDiff;
    cin>>bits>>numPlayers>>maxDiff;
    long players[numPlayers];
    long fedor;
    for(int i = 0; i < numPlayers; i++){
        cin>>players[i];
    }
    cin>>fedor;
    bitset<21> fedorArmy (fedor);
    int friends = 0;
    int differences;
    for(int i = 0; i < numPlayers; i++){
        differences = 0;
        bitset<21> playersArmy (players[i]);
        for(int i = 0; i < bits; i++){
            if(playersArmy[i]!=fedorArmy[i])
                differences++;
        }
        if(differences<=maxDiff)
            friends++;
    }
    cout<<friends;
}
