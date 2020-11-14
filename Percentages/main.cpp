#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fullName;
	string location;
	int initialScore;

	cout << "What is your first name? " << endl;
	getline(cin, fullName);
	cout << "What is the city, state and country you live in? " << endl;
	getline(cin, location);
	cout << "Please give a number from 0-100:" << endl;
	cin >> initialScore;

	cout << "Hello, " << fullName << ". We heard you are from " << location << "." << endl;
	cout << "Your original score is " << initialScore << ", but with five points added, your score is: " << initialScore + 5 << endl;


	return 0;
}
