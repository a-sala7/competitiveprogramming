#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Teams Forming CF527-D3-B
    int n;
    cin>>n;
    int students[n];
    for(int i = 0; i < n; i++)
        cin>>students[i];
    sort(students,students+n);
    long sum = 0;
    for(int i = 0; i < n; i+=2){
        cout<<i<<endl;
        sum += students[i+1] - students[i];
    }
    cout<<sum;
}
