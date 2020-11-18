#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));
	int count = 0;
	while (count < 10)
	{
		int dice = rand() % 6 + 1;
		count++;
		cout << dice << endl;
	}

	

	return 0;
}