#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> famNames(5);
	famNames[0] = "Bailey";
	famNames[1] = "Earthworm Jim";
	famNames[2] = "Tim Allen";
	famNames[3] = "jumbotron";
	famNames[4] = "Sally Ride";

	cout << "There are " << famNames.size() << " names on the list." << endl;

	cout << endl;

	for (string names : famNames)
	{
		cout << names << endl;
	}

	cout << endl;
	cout << "Adding prof name to list" << endl;

	famNames.insert(famNames.begin() + 2, "John Baugh");

	for (string names2 : famNames)
	{
		cout << names2 << endl;
	}

	cout << endl;
	cout << "remove last person" << endl;

	famNames.pop_back();

	for (string names3 : famNames)
	{
		cout << names3 << endl;
	}


	return 0;
}