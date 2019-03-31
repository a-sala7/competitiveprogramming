#include <iostream>
using namespace std;

int main()
{
	long int numOranges, maxSize, wasteMax, emptyWaste = 0, added = 0;
	cin>>numOranges>>maxSize>>wasteMax;
	int oranges[numOranges];
	for (int i = 0; i < numOranges; i++){
	    cin>>oranges[i];
	    if(oranges[i] <= maxSize){
            added+= oranges[i];
	    }
	    if(added > wasteMax){
            emptyWaste++;
            added = 0;
	    }
	}
	cout<<emptyWaste;

}