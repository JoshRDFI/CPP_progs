#include <iostream>
using namespace std;

int main()
{
	double num1;
	double num2;
	double num3;
	double result;

	cout << "Please enter your first real number: " << endl;
	cin >> num1;
	
	cout << "Please enter your second real number: " << endl;
	cin >> num2;
	
	cout << "Please enter your third real number: " << endl;
	cin >> num3;
	
	result = num1 + num2 + num3;

	cout << "The average of the numbers you entered is: " << result / 3 << endl;

	return 0;
}