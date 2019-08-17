#include <iostream>
#define fr first
#define sc second
using namespace std;

int main()
{
    //Expert Enough 1237
    int t;
    cin>>t; //test cases
    for(int k = 0; k < t; k++){
        int n;
        cin>>n;
        pair<string, pair<long, long>> database[n];
        string s;
        long a, b;
        for(int i = 0; i < n; i++){
            cin>>s>>a>>b;
            database[i].fr = s;
            database[i].sc.fr = a;
            database[i].sc.sc = b;
        }
        int q;
        cin>>q;
        long query;
        int results;
        string ans;
        for(int i = 0; i < q; i++){
            cin>>query;
            results = 0;
            for(int j = 0; j < n; j++){
                if(query >= database[j].sc.fr && query <= database[j].sc.sc){
                    results++;
                    ans = database[j].fr;
                    if(results > 1)
                        break;
                }
            }
            if(results != 1)
                cout<<"UNDETERMINED"<<endl;
            else
                cout<<ans<<endl;
        }
        if(k<t-1){
            cout<<endl;
        }
    }
}
