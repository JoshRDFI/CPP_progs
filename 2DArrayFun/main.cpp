#include <iostream>
using namespace std;

int main()
{
	int myNums[2][3]{
	{ 1,2,3 },
	{4,5,6}
	};

	cout << myNums[0][2] << endl;

	int answer = myNums[0][2] * myNums[1][2];

	cout << answer << endl;

	cout << endl;

	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << myNums[row][col] << endl;
		}
	}

	cout << endl;

	for (int row = 1; row >= 0; row--)
	{
		for (int col = 2; col >= 0; col--)
		{
			cout << myNums[row][col] << endl;
		}
	}

	return 0;
}