#include <iostream>
#include <vector>
#include <algorithm>
#define fr first
#define sc second

using namespace std;

int main()
{
    //Lotto 441
    int n;
    cin>>n;
    while(true){
        int nums[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &nums[i]);
        for(int a = 0; a < n - 5; a++)
            for(int b = a+1; b < n - 4; b++)
                for(int c = b+1; c < n - 3; c++)
                    for(int d = c+1; d < n - 2; d++)
                        for(int e = d+1; e < n - 1; e++)
                            for (int f = e+1; f < n; f++)
                                printf("%d %d %d %d %d %d\n", nums[a], nums[b], nums[c], nums[d], nums[e], nums[f]);


        cin>>n;
        if(n!=0)
            cout<<endl;
        else
            break;
    }
}
