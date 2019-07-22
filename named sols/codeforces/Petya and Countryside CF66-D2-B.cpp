#include <iostream>

using namespace std;

int main()
{
    //Petya and Countryside CF66-D2-B
    int n;
    cin>>n;
    int heights[n];
    for(int i = 0; i < n; i++)
        cin>>heights[i];
    //checking left and right of each
    int rightsReached, leftsReached, maxi = 0;
    for(int i = 0; i < n; i++){
        rightsReached = 0;
        leftsReached = 0;
        //check right of me
        for(int j = i; j+1 < n; j++){
            if(heights[j+1]<=heights[j]){
                rightsReached++;
            } else {
                break;
            }
        }
        //check left of me
        for(int j = i; j-1 >= 0; j--){
            if(heights[j-1]<=heights[j]){
                leftsReached++;
            } else {
                break;
            }
        }
        //printf("At %d reached %d on right, %d on left\n", i+1, rightsReached, leftsReached);
        maxi = max(maxi,leftsReached+rightsReached+1);
    }
    cout<<maxi;
}
