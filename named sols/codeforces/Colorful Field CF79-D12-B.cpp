#include <iostream>
#include <math.h>
#include <bitset>
#include <algorithm>
#define all(v) v.begin(), v.end()
#define ll long long
#define fr first
#define sc second
using namespace std;

string plantToPrint(long pos){
    string ps[3] = {"Grapes","Carrots","Kiwis"};
    return ps[pos%3];
}

int main()
{
    //Colorful Field CF79-D12-B
    long y, x;
    int w;
    int q;
    cin>>y>>x>>w>>q;
    vector<long> wastes;
    wastes.reserve(w);
    long wasteX, wasteY, wastePos;
    for(int i = 0; i < w; i++){
        cin>>wasteY>>wasteX;
        wastePos = wasteX;
        wastePos += (wasteY-1)*x;
        wastes.push_back(wastePos);
    }
    sort(all(wastes));
    long queryX, queryY, queryPos;
    for(int i = 0; i < q; i++){
        cin>>queryY>>queryX;
        queryPos = queryX;
        queryPos += (queryY-1)*x;
        if(binary_search(all(wastes), queryPos)){
            cout<<"Waste\n";
            continue;
        } else {
            int wastesBeforeMe = 0;
            for(int i = 0; i < w; i++){
                if(queryPos<wastes[i])
                    break;
                else {
                    wastesBeforeMe++;;
                }
            }
            cout<<plantToPrint(queryPos-wastesBeforeMe)<<endl;
        }
    }
}
