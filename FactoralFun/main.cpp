#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int num=factorial(6);

	cout << "The factorial of 6 is " << num << endl;

	return 0;
}

int factorial(int num)
{
	if (num>1)
	{
		return num * factorial(num - 1);
		
	}
	return 1;
}