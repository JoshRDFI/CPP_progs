#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	string nameIs;
	cout << "What is your age? " << endl;
	
	cin >> age;

	cout << "What is your name? " << endl;
	getline(cin, nameIs);

	cout << "Your name is " << nameIs << " and ";
	cout << "you are " << age << " years old." << endl;

	return 0;
}