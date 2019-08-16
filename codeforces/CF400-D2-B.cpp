#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#define fr first
#define sc second

using namespace std;

int main()

{
    //Inna and New Matrix of Candies CF400-D2-B
    int n,m;
    cin>>n>>m;
    char grid[n][m];
    bool dwarfFound, candyFound;
    int dwarfPos, candyPos;
    bool impossible = false;
    set<int> distances;
    for(int i = 0; i < n; i++){
        dwarfFound = false;
        candyFound = false;
        for(int j = 0; j < m; j++){
            cin>>grid[i][j];
            if(!impossible){
                if(grid[i][j] == 'S'){
                    candyFound = true;
                    candyPos = j;
                    if(!dwarfFound)
                        impossible = true;
                }
                if(grid[i][j] == 'G' && !candyFound){
                    dwarfFound = true;
                    dwarfPos = j;
                }
            }
        }
        distances.insert(abs(dwarfPos-candyPos));
    }
    if(impossible){
        cout<<-1;
    } else {
        cout<<distances.size();
    }

}
