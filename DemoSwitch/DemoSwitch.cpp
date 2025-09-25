// DemoSwitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    int a = 1233; 

    if (a > 123) {
        std::cout << a << "\n";
    }

    while (true)
    {

        std::cout << "Pick one of these Menu options:\n";
        std::cout << "'F' for File\n";
        std::cout << "'E' for Edit\n";
        std::cout << "'G' for Git\n";

        char selection{}; //the braces initilize the character to the empty character ('')
        std::cin >> selection; //not using getline here because getline stores its result in a STRING

        switch (selection)
        {
        case 'F':
            std::cout << "Displaying FILE options ...\n";
            break;

        case 'E':
            std::cout << "Displaying EDIT options ...\n";
            break;

        case 'G':
            std::cout << "Displaying GIT options ...\n";
            break;

        default:
            std::cout << "Unsupported choice entered ...\n";
            break;
        }

    }
}
