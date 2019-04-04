#include <iostream>
#include <queue>
#include <stack>

using namespace std;

string toLowerCase(string hGivenString){
    string hNewString;
    for (int i = 0; i < hGivenString.size(); i++){
        if(hGivenString[i] >= 'A' && hGivenString[i] <= 'Z'){
            hNewString+=hGivenString[i]+32;
        }
        //additional cleanup for this problem to remove special characters
        else if(hGivenString[i] >= 'a' && hGivenString[i] <= 'z' || hGivenString[i] == ' '){
            hNewString+=hGivenString[i];
        }
    }
    return hNewString;
}

int main()
{
    priority_queue<string> words;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w+", stdout);
    string s;
    while(cin>>s){
        words.push(toLowerCase(s));
    }
    string last;
    stack<string> theOutput;
    while(!words.empty()){
        if(words.top() == last){
            words.pop();
            continue;
        }
        last = words.top();
        theOutput.push(words.top());
        words.pop();
    }
    while(!theOutput.empty()){
        cout<<theOutput.top()<<endl;
        theOutput.pop();
    }
}
