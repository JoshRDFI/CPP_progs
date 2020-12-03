#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int powResult = pow(2, 3);
	int sqrtResult = sqrt(25);
	int ceilResult = ceil(4.2);
	int floorResult = floor(4.2);
	double log2Result = log2(512);

	cout << "2^3 is " << powResult << endl;
	cout << "sqrt of 25 is " << sqrtResult << endl;
	cout << "ceiling of 4.2 is " << ceilResult << endl;
	cout << "floor of 4.2 is " << floorResult << endl;
	cout << "What power do you take 2 to get 512? " << log2Result << endl;
	cout << "Verify results with pow function: " << pow(2, log2Result) << endl;

	return 0;
}