#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myVec;
	int inputNum;

	cout << "Enter a positive integer, or a negative integer to exit: " << endl;
	cin >> inputNum;

	while (inputNum > 0)
	{
		myVec.push_back(inputNum);
		cout << "Enter a positive integer, or a negative integer to exit: " << endl;
		cin >> inputNum;
	}

	cout << endl;
	cout << "Here are your numbers doubled: " << endl;

	for (int nums : myVec)
	{
				cout << nums * 2 << endl;
	}

	return 0;
}