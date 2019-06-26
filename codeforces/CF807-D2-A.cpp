#include <iostream>

using namespace std;

int main()
{
	//Is it rated CF807-D2-A
    int users;
    cin>>users;
    int before[users];
    int after[users];
    bool change = false;
    for (int i = 0; i < users; i++){
        cin>>before[i]>>after[i];
        if(before[i]!=after[i])
            change = true;
    }
    if(change){
        cout<<"rated";
    } else {
        bool noobExcelled = false;
        for (int i = 0; i < users-1; i++){
            if(before[i]<before[i+1])
                noobExcelled = true;
        }
        if(noobExcelled)
            cout<<"unrated";
        else
            cout<<"maybe";
    }
}
