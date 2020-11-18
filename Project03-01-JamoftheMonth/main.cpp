#include <iostream>
#include <string>

using namespace std;
// Wow! worked first time without errors!
int main()
{
	int packAextra = 5;
	int packBextra = 4;
	int packCextra = 3;
	int packAcost = 8;
	int packBcost = 12;
	int packCcost = 15;
	int packAincludes = 2;
	int packBincludes = 4;
	int packCincludes = 6;
	char packName;
	int extraJams = 0;
	int totalCost = 0;

	cout << "Which JamPack did you order?" << endl;
	cin >> packName;
	cout << "How many jams did you order this month?" << endl;
	cin >> extraJams;

	

	switch (packName)
	{
	case 'A':
		totalCost = ((extraJams - packAincludes) * packAextra) + packAcost;
		cout << "Your total cost for this month is: $" << totalCost << endl;
		break;
	case 'a':
		totalCost = ((extraJams - packAincludes) * packAextra) + packAcost;
		cout << "Your total cost for this month is: $" << totalCost << endl;
		break;
	case 'B':
		totalCost = ((extraJams - packBincludes) * packBextra) + packAcost;
		cout << "Your total cost for this month is: $" << totalCost << endl;
		break;
	case 'b':
		totalCost = ((extraJams - packBincludes) * packBextra) + packBcost;
		cout << "Your total cost for this month is: $" << totalCost << endl;
		break;
	case 'C':
		totalCost = ((extraJams - packCincludes) * packCextra) + packCcost;
		cout << "Your total cost for this month is: $" << totalCost << endl;
		break;
	case 'c':
		totalCost = ((extraJams - packCincludes) * packCextra) + packCcost;
		cout << "Your total cost for this month is: $" << totalCost << endl;
		break;
	default:
		cout << "Not valid selections." << endl;

	}



	return 0;
}