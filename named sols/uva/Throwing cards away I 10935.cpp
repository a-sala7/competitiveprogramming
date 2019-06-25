#include <iostream>
#include <queue>

using namespace std;

int main()
{
	//Throwing cards away I 10935
    int numCards, x;
    while(scanf("%d", &numCards) && numCards){
        queue<int> myCards;
        for (int i = 0; i < numCards; i++){
            myCards.push(i+1);
        }
        cout<<"Discarded cards: ";
        for (int i = 0; i < numCards-1; i++){
            cout<<myCards.front();
            if(myCards.size() > 2)
                cout<<", ";
            myCards.pop();
            x = myCards.front();
            myCards.pop();
            myCards.push(x);
        }
        cout<<endl;
        cout<<"Remaining card: "<<myCards.front()<<endl;
    }
}
