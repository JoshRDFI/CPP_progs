#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 10> myArray{};

	for (int i = 0; i < myArray.size(); i++)
	{
		myArray[i] = i*2;
	}

	for (int items : myArray)
	{
		cout << items << endl;
	}


	cout << "This array has: " << myArray.size() << " items in it." << endl;

	return 0;
}