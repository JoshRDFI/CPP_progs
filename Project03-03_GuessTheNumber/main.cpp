#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));

	int guess;
	int numGuesses = 0;
	int randNum = rand() % 100 + 1;

	
	cout << "Try to guess the computer's number! Enter a number between 1 - 100." << endl;
	cin >> guess;
	numGuesses++;

	while (guess != randNum)
	{
		if (guess < 1 || guess > 100)
		{
			cout << "That was a wasted guess. Only between 1 - 100. Try again: " << endl;
			cin >> guess;
			numGuesses++;
		}

		else if (randNum < guess)
		{
			cout << "Your guess is too high! Try again:" << endl;
			cin >> guess;
			numGuesses++;
		}
		else 
		{
			cout << "Your guess is too low! Try again:" << endl;
			cin >> guess;
			numGuesses++;
		}
		
	}
	cout << "Congratulations! You guessed the number: " << randNum <<  " in " << numGuesses << " guesses." <<endl;

	return 0;
}