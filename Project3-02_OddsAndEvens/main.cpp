#include <iostream>
using namespace std;

int main()
{
	int oddNum = 0;
	int evenNum = 0;
	int count = 0;

	while (count < 51)
	{
		if (count % 2 == 0)
		{
			evenNum = count;
			cout << evenNum << " is even." << endl;
			count++;
		}

		else
		{
			oddNum = count;
			cout << oddNum << " is odd." << endl;
			count++;
		}
	}

	
	return 0;
}