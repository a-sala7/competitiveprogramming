#include <iostream>
using namespace std;

int main()
{
    string s;
    int nums[3] = {0,0,0};
    cin>>s;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '+'){
            continue;
        }
        int index = s[i] - '0' - 1;
        nums[index]++;
    }
    string newstr;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < nums[i]; j++){
            newstr+='1'+i;
            newstr+='+';
        }
    }
    for(int i = 0; i < newstr.size() - 1; i++){
        cout<<newstr[i];
    }
}
