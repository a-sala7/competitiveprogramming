#include <iostream>

using namespace std;

int main()
{
	//Dubstep CF208-D2-A
    string s;
    cin>>s;
    char c, r, l;
    int printStatus[200] = {0}; //0 = don't print, 1 = print, 2 = print space
    for (int i = 0; i < 200; i++){
        printStatus[i]=1;
    }
    int startFrom;
    for (int i = 0; i < s.size(); i+=3){
        l = s[i];
        c = s[i+1];
        r = s[i+2];
        if(l=='W'&&c=='U'&&r=='B'){
            printStatus[i] = 0;
            printStatus[i+1] = 0;
            printStatus[i+2] = 0;
        } else {
            startFrom = i;
            break;
        }
    }
    int endAt;
    for (int i = s.size()-1; i > startFrom; i-=3){
        l = s[i-2];
        c = s[i-1];
        r = s[i];
        if(l=='W'&&c=='U'&&r=='B'){
            printStatus[i-2] = 0;
            printStatus[i-1] = 0;
            printStatus[i] = 0;
        } else {
            endAt = i;
            break;
        }
    }
    char lastLetter;
    for (int i = startFrom; i <= endAt; i++){
        l = s[i];
        c = s[i+1];
        r = s[i+2];
        if(l=='W'&&c=='U'&&r=='B'){
            if(lastLetter==' '){
                printStatus[i] = 0;
                printStatus[i+1] = 0;
                printStatus[i+2] = 0;
                i+=2;
                lastLetter=' ';
            } else {
                printStatus[i] = 2;
                printStatus[i+1] = 0;
                printStatus[i+2] = 0;
                i+=2;
                lastLetter=' ';
            }
        } else {
            lastLetter='0';
        }
    }
    for (int i = 0; i < s.size(); i++){
        if(printStatus[i] == 1){
            cout<<s[i];
        } else if (printStatus[i] == 2){
            cout<<' ';
        }
    }
}
