#include <iostream>
#include <map>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

bool colorInEdges(char c, string s){
    int szS = s.size();
    for(int i = 0; i < 3; i++){
        if(s[i]==c)
            return true;
    }
    for(int i = szS-1; i < szS-4; i--){
        if(s[i]==c)
            return true;
    }
    return false;
}

int main()
{
    //Easter Eggs CF78-D2-B
    int n;
    cin>>n;
    string colors = "ROYGBIV";
    string toPrint = "ROYGBIV";
    int ind = 7;
    while(toPrint.size()<n){
        if(!colorInEdges(colors[ind%7], toPrint)){
            toPrint += colors[ind%7];
            ind++;
        } else {
            ind++;
        }
    }
    cout<<toPrint;
}
