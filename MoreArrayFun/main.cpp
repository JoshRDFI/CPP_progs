#include <iostream>
using namespace std;

int main()
{
	int newArray[10];
	for (int i = 0; i < 10; i++)
	{
		newArray[i] = i + 1;
	}

	for(int number:newArray)
		{
			cout << number << endl;
		}

	return 0;
}