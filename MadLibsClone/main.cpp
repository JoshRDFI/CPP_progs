#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*Variable List*/
	string adjective1;
	string girlsName;
	string adjective2;
	string occupation1;
	string placeName;
	string clothing;
	string hobby;
	string adjective3;
	string occupation2;
	string boysName;
	string mansName;

	/*User questions to fill variables*/
	cout << "Please enter an adjective: " << endl;
	cin >> adjective1;

	cout << "Please enter a girl's name: " << endl;
	cin >> girlsName;

	cout << "Please enter another adjective: " << endl;
	cin >> adjective2;

	cout << "Please enter an occupation: " << endl;
	cin >> occupation1;

	cout << "Please enter a city name: " << endl;
	cin >> placeName;

	cout << "Please enter a type of clothing: " << endl;
	cin >> clothing;

	cout << "Please enter a hobby someone might have: " << endl;
	cin >> hobby;

	cout << "Please enter another adjective: " << endl;
	cin >> adjective3;

	cout << "Please enter another occupation: " << endl;
	cin >> occupation2;

	cout << "Please enter a boy's name: " << endl;
	cin >> boysName;

	cout << "Please enter a man's name: " << endl;
	cin >> mansName;

	/*Display completed Madlib!*/
	cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 << " " << occupation1 << " in the Kingdom of " << placeName << ". She loved to wear " << clothing << " and to " << hobby << ". She wanted to marry the " << adjective3 << " " << occupation2 << " named " << boysName << " but her father, King " << mansName << " forbade her from seeing him." << endl;


	return 0;
}