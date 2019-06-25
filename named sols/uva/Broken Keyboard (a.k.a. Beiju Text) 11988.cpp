#include <iostream>
#include <deque>
#include <stack>

using namespace std;

int main()
{
    string s;
    while(cin>>s){
        bool atEnd = true;
        bool isSpcl = false;
        deque<char> newStr;
        stack<char> temp;
        for (int i = 0; i < s.size(); i++){
            char curr = s[i];
            if(curr == '['){
                atEnd = false;
                isSpcl = true;
            } else if(curr == ']'){
                atEnd = true;
                isSpcl = true;
            } else {
                isSpcl = false;
            }
            if(isSpcl == false){
                if(atEnd == false){
                    temp.push(curr);
                } else {
                    newStr.push_back(curr);
                }
            }
            if(isSpcl || i == s.size()-1 && temp.size()>0){
                //if(temp.size()>0){
                    while(!temp.empty()){
                        newStr.push_front(temp.top());
                        temp.pop();
                    }
                //}
            }
        }
        for (int i = 0; i < newStr.size(); i++){
            cout<<newStr[i];
        }
        cout<<endl;
    }
}
