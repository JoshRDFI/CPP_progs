#include <iostream>
using namespace std;

void printSomething();
void printMyName();

int main()
{
	printSomething();
	printMyName();

	return 0;
}

void printSomething()
{
	cout << "Hey look! I'm printing something!" << endl;
}

void printMyName()
{
	cout << endl << "My name is Josh" << endl;
}