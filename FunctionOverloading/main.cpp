#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num3);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("John", "Baugh");
	int cubeNum = getResult(3);
	cout << "Result num is " << resultNum << endl;
	cout << "Name result is " << nameResult << endl;
	cout << endl;
	cout << "Result of cubing: " << cubeNum << endl;

	return 0;
}

int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(int num3)
{
	return num3 * num3 * num3;
}