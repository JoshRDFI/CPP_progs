#include <iostream>
using namespace std;

int num1=0;
int num2=0;
int num3=0;

int multiply(num1, num2, num3);

int main()
{
	/*int product;
	*/

	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter second number: " << endl;
	cin >> num2;
	cout << "Enter third number: " << endl;
	cin >> num3;

	multiply(num1, num2, num3);
	cout << "The solution is: " << product << endl;


	return 0;
}

int multiply(num1, num2, num3)
{
	int product = (num1 * num2 * num3);
	return product;
}