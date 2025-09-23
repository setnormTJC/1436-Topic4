// 1436-Topic4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<thread> 
#include<chrono> //these are better (in most respects than Windows.h's "sleep" function)

#include<Windows.h>


void sleep(unsigned int secondsToSleepFor)
{
	std::this_thread::sleep_for(std::chrono::seconds(secondsToSleepFor));
}


int main()
{
	bool lightIsGreen = false;

	if (lightIsGreen)
	{
		std::cout << "Go\n";
	}

	else
	{
		std::cout << "Do not go\n";
	}

	Sleep(2'000); //make sure your input is > 0!

	lightIsGreen = !lightIsGreen;

	if (lightIsGreen)
	{
		std::cout << "Go\n";
	}

	else
	{
		std::cout << "Do not go\n";
	}


}

