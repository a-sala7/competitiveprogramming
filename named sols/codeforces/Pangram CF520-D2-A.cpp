#include <iostream>

using namespace std;

int main()
{
	//Pangram CF520-D2-A
    bool found[26] = {false};
    int lttrs;
    cin>>lttrs;
    char curr;
    while(lttrs--){
        cin>>curr;
        if(curr >= 'a' && curr <= 'z'){
            found[curr-'a'] = true;
        } else {
            found[curr-'A'] = true;
        }
    }
    int numFound = 0;
    for (int i = 0; i < 26; i++){
        if(found[i]){
            numFound++;
        }
    }
    if(numFound == 26){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
