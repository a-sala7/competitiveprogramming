#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //Mahmoud and a Triangle CF396-D2-B
    long n;
    cin>>n;
    long sides[n];
    for(long i = 0; i < n; i++)
        cin>>sides[i];
    sort(sides,sides+n);
    long a, b, c;
    for(int i = 1; i < n-1; i++){
        a = sides[i-1], b = sides[i], c = sides[i+1];
        if(a+b > c && b+c > a && a+c > b){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
