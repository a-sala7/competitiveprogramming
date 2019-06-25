#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int a, b, c;
    cin>>a>>b>>c;
    /*fuck this fucking shit let's try bruteforcing it
    int meetingPoint = (a+b+c)/3;
    int totalDist = abs(a-meetingPoint)+abs(b-meetingPoint)+abs(c-meetingPoint);
    cout<<totalDist;*/
    int meetingPoint = 200;
    int curTest;
    for(int i = 0; i < 101; i++){
        curTest = abs(a-i)+abs(b-i)+abs(c-i);
        meetingPoint = min(meetingPoint,curTest);
    }
    cout<<meetingPoint;
}
