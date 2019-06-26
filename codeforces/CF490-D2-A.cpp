#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//Team Olympiad CF490-D2-A
    int numKids, x = 0, y = 0,z = 0;
    cin>>numKids;
    int skills[numKids];
    bool taken[numKids] = {false};
    for (int i = 0; i < numKids; i++){
        cin>>skills[i];
        if(skills[i] == 1)
            x++;
        if(skills[i] == 2)
            y++;
        if(skills[i] == 3)
            z++;
    }
    int maxTeams = min(x,min(y,z));
    cout<<maxTeams<<endl;
    for (int i = 0; i < maxTeams; i++){
        int teamCount = 0;
        bool recruited[3] = {false};
        for (int j = 0; j < numKids; j++){
            if(!taken[j] && !recruited[skills[j]-1]){
                taken[j] = true;
                recruited[skills[j]-1] = true;
                teamCount++;
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }
}
