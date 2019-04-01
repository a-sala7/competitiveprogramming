#include <iostream>

using namespace std;

int charInString(char ccc, string sss);

int main()
{
    int n;
    cin>>n;
    string strs[n];
    for (int i = 0; i < n; i++){
        cin>>strs[i];
    }
    for(int i = 0; i < n; i++){
        string curr = strs[i];
        if(curr.size() == 1){
            cout<<"Yes"<<endl;
            continue;
        }
        bool repeats = false;
        for (int j = 0; j < curr.size(); j++){
            for (int k = 0; k < curr.size(); k++){
                if(curr[j] == curr[k] && j!=k){
                    repeats = true;
                    break;
                }
            }
            if(repeats)
                break;
        }
        if(repeats){
            cout<<"No"<<endl;
            continue;
        }
        bool diverseStr = true;
        char mini = min(curr[0],curr[1]);
        char maxi = max(curr[0],curr[1]);
        for (int j = 0; j < curr.size(); j++){
            mini = min(curr[j],mini);
            maxi = max(curr[j],maxi);
        }
        for (char j = mini; j < maxi; j++){
            if(charInString(j, curr) == -1){
                diverseStr = false;
                break;
            }
        }
        if(diverseStr){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
}

int charInString(char ccc, string sss){
    for (int i = 0; i < sss.size(); i++){
        if(sss[i]==ccc){
            return i;
        }
    }
    return -1;
}
