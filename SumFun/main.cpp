#include <iostream>
using namespace std;

int main()
{
	//keep running total of values entered until a negative number is entered. Then exit and display total.
	int yourEntry = 0;
	int theSum = 0;

	cout << "Please enter a non-negative number. To exit, enter a negative number." << endl;
	cin >> yourEntry;
	theSum = theSum + yourEntry;
	

	while (yourEntry >= 0)
	{
		cout << "Please enter a non-negative number. To exit, enter a negative number." << endl;
		cin >> yourEntry;
		if (yourEntry >= 0)
		{
			theSum = theSum + yourEntry;
		}
			
	}


	cout << "The total is: " << theSum << endl;

	return 0;
}