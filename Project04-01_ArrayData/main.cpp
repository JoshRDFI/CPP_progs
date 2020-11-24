#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 5> inputData;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter an integer: " << endl;
		cin >> inputData[i];
	}

	cout << endl << "Double of the integers you entered: " << endl;

	for (int j = 0; j < 5; j++)
	{
		cout << inputData[j] * 2 << endl;
	}

	return 0;
}