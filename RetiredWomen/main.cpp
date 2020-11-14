#include <iostream>
using namespace std;

int main()
{
	//prompt user for name and gender
	//age is int, gender is char
	//get of 'f' or 'F' and are 60+
	//responds: You qualify for the discount
	//otherwise responds: You do not qualify for the discount

	int age;
	char gender;

	cout << "How old are you?" << endl;
	cin >> age;
	cout << "Are you Male or Female?" << endl;
	cin >> gender;

	if (age >= 60)
	{
		if (gender == 'F')
			cout << "You qualify for the discount" << endl;
		else if (gender == 'f')
			cout << "You qualify for the discount" << endl;
		else
			cout << "You do not qualify for the discount" << endl;
	}
	else
	{
		cout << "You do not qualify for the discount" << endl;
	}
	return 0;
}
