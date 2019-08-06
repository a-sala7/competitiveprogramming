#include <iostream>
#include <math.h>
#include <bitset>
#include <algorithm>
#define ll long long
#define fr first
#define sc second
using namespace std;

bool hasAllLetters(long l, long r, string s){
    int ltrExists[91] = {0};
    for(long i = l; i <= r; i++){
        ltrExists[s[i]]++;
    }
    int missing = 0;
    for(char i = 'A'; i <= 'Z'; i++){
        if(ltrExists[i]==0)
            missing++;
    }
    if(missing!=ltrExists['?'])
        return false;
    return true;
}

string fixIt(long l, long r, string s){
    int ltrExists[91] = {0};
    for(long i = l; i <= r; i++){
        ltrExists[s[i]]++;
    }
    for(long i = l; i <= r; i++){
        if(s[i]=='?')
        for(char j = 'A'; j <= 'Z'; j++){
            if(ltrExists[j]==0){
                s[i] = (char)j;
                ltrExists[j] = 1;
                break;
            }
        }
    }
    return s;
}

int main()
{
    //Complete The Word CF716-D2-B
    string word;
    cin>>word;
    long n = word.size();
    if(n<26)
        cout<<-1;
    else
    {
        long ok[91] = {0};
        for(long i = 0; i < n; i++){
            ok[word[i]]++;
        }
        int missing = 0;
        long slots = ok['?'];
        for(char i = 'A'; i <= 'Z'; i++){
            if(ok[i]<1)
                missing++;
        }
        if(missing>slots)
            cout<<-1;
        else {
            long l = 0;
            long r = 25;
            bool fixed = false;
            while(r<n){
                if(hasAllLetters(l,r,word)){
                    fixed = true;
                    break;
                } else {
                    l++;
                    r++;
                }
            }
            if(fixed){
                string newWord = fixIt(l,r,word);
                for(long i = 0; i < n; i++){
                    if(newWord[i]=='?'){
                        newWord[i] = 'Z';
                    }
                }
                cout<<newWord;
            } else {
                cout<<-1;
            }
        }
    }
}
