#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //The path in the colored field 10102
    int n;
    while(scanf("%d", &n) != EOF){
        vector<pair <int, int>> ones;
        vector<pair <int, int>> threes;
        char c;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>c;
                if(c=='1')
                    ones.push_back(make_pair(i, j));
                if(c=='3')
                    threes.push_back(make_pair(i, j));
            }
        }
        int maxi = 0;
        for(int i = 0; i < ones.size(); i++){
            int minDist = 0;
            for(int j = 0; j < threes.size(); j++){
                int dist = abs(ones[i].fr-threes[j].fr) + abs(ones[i].sc-threes[j].sc);
                if(!minDist)
                    minDist = dist;
                else
                    minDist = min(minDist, dist);
            }
            maxi = max(maxi, minDist);
        }
        cout<<maxi<<endl;
    }
}
