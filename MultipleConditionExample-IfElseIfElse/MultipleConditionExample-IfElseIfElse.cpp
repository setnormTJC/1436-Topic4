// MultipleConditionExample-IfElseIfElse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter the thing (video or photo) that you want to see:\n"; 

    std::cout << "Your options are: \n";
    std::cout << "NM ...(AKA: lovely New Mexico State Park (Sugarite)\n";
    std::cout << "Cat ... A sleepy kitty (Big Bang Theory ref.), purr, purr\n";

    std::string theThingYouWantToSee; 
    std::getline(std::cin, theThingYouWantToSee);

    //confirm that we got their input correctly: 
    std::cout << "You entered : " << theThingYouWantToSee << "\n";
    std::cout << "Now we will display:\n";

    if (theThingYouWantToSee == "Cat")
    {
        std::system("Ramona.jpg");  //NOTE: the file in the folder ACTUALLY is beginning with lowercase 'r'!
    }
    //the two if conditions are "mutually exclusive" 
    else if (theThingYouWantToSee == "NM")  //NM stands for "New Mexico" 
    {
        std::system("NM.jpg"); //png (supports "alpha blending") v jpg 
    }

    else //"catch-all" (NONE (or neither) of the previous conditions were true
    {
        std::cout << "We don't know how to handle that input\n";
    }

    std::cout << "End of program reached\n";
}
