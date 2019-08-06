#include <iostream>
#include <math.h>
#include <bitset>
#include <algorithm>
#define ull unsigned long long
#define fr first
#define sc second
using namespace std;

int main()
{
    //Devu, the Dumb Guy CF439-D2-B
    long n;
    ull hrsPerChapter;
    cin>>n>>hrsPerChapter;
    ull subjects[n];
    for(long i = 0; i < n; i++){
        cin>>subjects[i];
    }
    sort(subjects, subjects+n);
    ull hrsSpent = 0;
    for(long i = 0; i < n; i++){
        hrsSpent += hrsPerChapter*subjects[i];
        if(hrsPerChapter > 1)
            hrsPerChapter--;
    }
    cout<<hrsSpent;
}
