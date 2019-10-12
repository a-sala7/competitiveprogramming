#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Game 23 CF547-D3-A
    long n, m;
    cin>>n>>m;
    int steps = 0;
    while(n<m){
        if(m%(n*3)==0){
            n*=3;
            steps++;
        } else if(m%(n*2)==0){
            n*=2;
            steps++;
        } else {
            break;
        }
    }
    if(n==m){
        cout<<steps;
    } else {
        cout<<-1;
    }
}
