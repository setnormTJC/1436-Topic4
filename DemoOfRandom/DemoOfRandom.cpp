// DemoOfRandom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	while (true)
	{
		srand(time(0)); //s stands for "seed"
		//makes the result "non-deterministic"
		std::cout << rand() % 10 + 1 << "\n"; //mod
		std::system("pause"); 
	}
}

