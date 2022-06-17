#include <iostream>
using namespace std;

int main()
{
	int typeNum = 0;
	char c;
	
	cout << "Virtual University!" << endl;
	
	cout << "Please enter y/n to continue! ";
	cin >> c;
	
	do {
		if (typeNum <= 10)
		{
			typeNum = 6;
		} else {
			typeNum = typeNum +1;
		}
	}
	while(typeNum <= 5);
}
