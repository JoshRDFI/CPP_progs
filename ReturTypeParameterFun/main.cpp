#include <iostream>
using namespace std;

void printHello();
void printNumber(int a);
int square(int b);
int giveMe10();
int addThese(int num1, int num2);


int main()
{
	int num1 = 120;
	int num2 = 580;
	int b = 10;

	printHello();
	printNumber(42);

	int someData = giveMe10();
	cout << someData << endl;

	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	printNumber(addThese(num1, 50));

	cout << square(b) << endl;

	return 0;
}

void printHello()
{
	cout << "Hello There!" << endl;
}

void printNumber(int a)
{
	cout << "The number is " << a << endl;
}

int square(int b)
{
	return b * b;
}

int giveMe10()
{
	return 10;
}

int addThese(int num1, int num2)
{
	return num1 + num2;
}