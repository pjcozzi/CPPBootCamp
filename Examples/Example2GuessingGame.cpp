#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int _tmain(int argc, _TCHAR* argv[])
{
	srand ((unsigned int)time(0));

	int answer = rand() % 100 + 1;
	int guess = 0;

	// TODO:  Only allow five guesses by replacing do...while with a for loop.
	do
	{
		std::cout << "Guess a number between 1 and 100: ";
		std::cin >> guess;
		
		if (guess < answer)
		{
			std::cout << "Your guess is too low." << std::endl;
		}
		else if (guess > answer)
		{
			std::cout << "Your guess is too high." << std::endl;
		}
	} while (guess != answer);

	std::cout << "Correct." << std::endl;
	return 0;
}