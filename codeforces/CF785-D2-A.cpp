#include <iostream>

using namespace std;

int main()
{
    long n;
    cin>>n;
    long long result = 0;
    string shape;
    for(int i = 0; i < n; i++){
        cin>>shape;
        if(shape == "Tetrahedron"){
            result+=4;
        } else if(shape == "Cube"){
            result+=6;
        } else if(shape == "Octahedron"){
            result+=8;
        } else if(shape == "Dodecahedron"){
            result+=12;
        } else if(shape == "Icosahedron"){
            result+=20;
        }
    }
    cout<<result;
}
