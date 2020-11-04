#include <iostream>
using namespace std;

int main()
{
	cout << boolalpha;

	int a = 15;
	int b = 20;
	bool areEqual = a == b;

	int isAge = 21;
	int myAge = 47;
	bool oldMan = isAge <= myAge;

	cout << (a < b) << endl;
	cout << areEqual << endl;

	cout << oldMan << endl;


	return 0;
}