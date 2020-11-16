#include <iostream>
using namespace std;

int main()
{
	int i = 0;

	cout << "Displaying only even numbers:" << endl;
	while ( i < 10)
	{
		if (i % 2 != 0)
		{
			i++;
			continue;
		}
			cout << i << endl;
			i++;
	}


	return 0;
}