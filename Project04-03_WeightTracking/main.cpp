#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> personName;
	vector<int> personWeight;

	string firstName;
	int weight;
	int group = 0;

	////Initialization of inputs
	//cout << "What is the name of a person?" << endl;
	//getline(cin, firstName);
	//cout << "How much does " << firstName << " weigh?" << endl;
	//cin >> weight;
	//cin.get();

	//Loop to get names and weights
	while (group <= 5)
	{
		personName.push_back(firstName);
		personWeight.push_back(weight);
		cout << "What is the name of a person?" << endl;
		getline(cin, firstName);
		cout << "How much does " << firstName << " weigh?" << endl;
		cin >> weight;
		cin.get();
		group++;
	}

	//Output of vectors
	for (int i = 0; i < group; i++)
	{
		cout << personName[i] << " weighs " << personWeight[i] << " lbs." << endl;
	}

	return 0;
}