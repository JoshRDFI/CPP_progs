/* 
Arithmetic Operators
+ addition operator
- subtraction operator
* multiplaction operator
/ division operator
% modulus operator
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;
	int myInt = 5;
	result += 10;

	cout << "Sum = " << sum << endl;
	cout << "difference = " << difference << endl;
	cout << "product = " << product << endl;
	cout << "quotient = " << quotient << endl;
	cout << "remainder = " << remainder << endl;
	cout << "Result = " << result << endl;
	cout << myInt << endl;
	myInt++;
	cout << myInt << endl;
	return 0;
}