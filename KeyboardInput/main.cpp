#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	string nameIs;
	cout << "What is your age? " << endl;
	
	getline (cin, age);

	cout << "What is your name? " << endl;
	cin >> nameIs;
	cout << "Your name is " << nameIs << " and ";
	cout << "you are " << age << " years old." << endl;

	return 0;
}