#include <iostream>
using namespace std;

void someFunction(int aParam);

double myGlobalDouble = 3.14159;

int main()
{
	int localToMain = 20;
	cout << "the local to main variable is " << localToMain << endl;
	cout << "The Global double (in main) is " << myGlobalDouble << endl;

	someFunction(25);

	return 0;
}

void someFunction(int aParam)
{
	int myLocalNum = 100;

	cout << "My local number is: " << myLocalNum << endl;
	cout << "The Parameter is: " << aParam << endl;
	cout << "My Global double (in someFunction) is: " << myGlobalDouble << endl;
}