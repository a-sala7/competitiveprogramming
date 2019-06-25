#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int r, l, a;
    cin>>l>>r>>a;
    bool special = false;
    if(l==0 && r==0){
        special = true;
        if(a%2==0){
            cout<<a;
        } else {
            cout<<a-1;
        }
    }
    if(!special){
        int teamR = 0;
        int teamL = 0;
        teamR+=r;
        teamL+=l;
        //less lefties
        if(teamR>teamL){
            int gap = teamR-teamL;
            if(a >= gap){
                teamL += gap;
                a -= gap;
            } else if (a < gap){
                teamL += a;
                a = 0;
            }
        }
        //less righties
        if(teamL>teamR){
            int gap = teamL-teamR;
            if(a >= gap){
                teamR += gap;
                a -= gap;
            } else if (a < gap){
                teamR += a;
                a = 0;
            }
        }
        //if a was greater than or equal to the gap, the team is now balanced
        if(teamR == teamL){
            if(a==0){
                cout<<teamR+teamL;
            } else if(a>0){
                if(a%2==0){
                    teamR+= (a/2);
                    teamL+= (a/2);
                    a==0;
                } else {
                    a--;
                    teamR+= (a/2);
                    teamL+= (a/2);
                    a==0;
                }
                cout<<teamR+teamL;
            }
        } else if(teamR != teamL){
            cout<<min(teamR,teamL)*2;
        }
    }
}
