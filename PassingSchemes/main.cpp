#include <iostream>
using namespace std;

void valueChanged1(int sumNum);
void valueChanged2(int& sumNum);
void threeTimesN(int timeThree, int& output);

int main()
{
	int myNumber = 20;

	cout << "Before valueChanged1 called, myNumber is " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After calling the void, myNumber is " << myNumber << endl;

	cout << endl;

	cout << "myNumber is currently: " << myNumber << endl;
	valueChanged2(myNumber);
	cout << "After value change, myNumber is " << myNumber << endl;

	//Project part
	int timeThree;
	int output;
	cout << "Give a number: " << endl;
	cin >> timeThree;
	threeTimesN(timeThree, output);


	return 0;
}

void valueChanged1(int sumNum)
{
	sumNum = 100;
	cout << "Some num in valueChanged1 is " << sumNum << endl;
}

void valueChanged2(int& sumNum)
{
	sumNum = 100;
	cout << "Some num in valueChanged2 is " << sumNum << endl;
}

void threeTimesN(int timeThree, int& output)
{
	output = timeThree * 3;
	cout << "Output is: " << output << endl;
}