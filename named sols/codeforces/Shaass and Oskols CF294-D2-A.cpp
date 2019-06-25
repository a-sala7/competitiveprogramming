#include <iostream>
using namespace std;

int main()
{
	int numLines;
	cin>>numLines;
	int numBirds[numLines];
	for (int i = 0; i < numLines; i++){
	    cin>>numBirds[i];
	}
	int numShot;
	cin>>numShot;
	int shotCoords[numShot][2];
	for (int i = 0; i < numShot; i++){
	    cin>>shotCoords[i][0]>>shotCoords[i][1];
	}
	for (int i = 0; i < numShot; i++){
        int shotLine = shotCoords[i][0]-1;
        int shotBird = shotCoords[i][1];
	    int goingUp = numBirds[shotLine] - shotBird;
	    int goingDown = shotBird - 1;
	    //cout<<"Going up: "<<goingUp<<", Going down: "<<goingDown;
	    //cout<<", Upper line: "<<numBirds[shotLine+1]<<", Lower Line: "<<numBirds[shotLine-1]<<endl;
	    //ZERO CURRENT
	    numBirds[shotLine] = 0;
	    //ADD TO UP
	    if(shotCoords[i][0] < numLines){
            numBirds[shotLine+1] += goingUp;
	    }
	    //ADD TO DOWN
	    if(shotCoords[i][0] > 0){
            numBirds[shotLine-1] += goingDown;
	    }
        //cout<<"Upper now: "<<numBirds[shotLine+1]<<", Lower now: "<<numBirds[shotLine-1]<<endl;
	}
	for (int i = 0; i < numLines; i++){
        cout<<numBirds[i]<<endl;
	}
}

