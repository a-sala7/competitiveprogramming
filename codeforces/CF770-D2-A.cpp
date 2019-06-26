#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//New Password CF770-D2-A
    string ltrs = "abcdefghijklmnopqrstuvwxyz";
    bool used[26] = {false};
    int reqSize, uniqueLtrs;
    string pw;
    cin>>reqSize>>uniqueLtrs;
    for (int i = 0; pw.size() < uniqueLtrs; i++){
        pw+=ltrs[i];
    }
    for (int i = 0; pw.size() < reqSize; i++){
        pw+=pw[i];
    }
    cout<<pw;
}
