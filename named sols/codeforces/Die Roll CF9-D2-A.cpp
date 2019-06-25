#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	//Die Roll CF9-D2-A
	int roll1, roll2, topRoll;
	cin >> roll1 >> roll2;
	topRoll = max(roll1, roll2);
	switch (topRoll) {
		case 0:
			cout << "1/1";
			break;
		case 1:
			cout << "1/1";
			break;
		case 2:
			cout << "5/6";
			break;
		case 3:
			cout << "2/3";
			break;
		case 4:
			cout << "1/2";
			break;
		case 5:
			cout << "1/3";
			break;
		case 6:
			cout << "1/6";
			break;
		default:
			cout << "0/1";
			break;
	}
}