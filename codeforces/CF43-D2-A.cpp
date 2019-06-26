#include <iostream>

using namespace std;

int main()
{
	//Football CF43-D2-A
    string name1, name2, curr;
    bool assigned[2] = {false};
    int goals;
    cin>>goals;
    int goals1 = 0;
    int goals2 = 0;
    for (int i = 0; i < goals; i++){
        bool assignmentIteration = false;
        cin>>curr;
        if(!assigned[0]){
            name1 = curr;
            assigned[0] = true;
            goals1++;
            assignmentIteration = true;
        }
        if(!assigned[1] && curr!=name1){
            name2 = curr;
            assigned[1] = true;
            goals2++;
            assignmentIteration = true;
        }
        if(assignmentIteration)
            continue;
        if(curr == name1)
            goals1++;
        else
            goals2++;
    }
    if(goals1>goals2){
        cout<<name1;
    } else {
        cout<<name2;
    }
}