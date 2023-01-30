#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <exception>

std::vector<int> generateNRandomDiceRolls(int numberOfRolls = 5) 
{
    std::vector<int> rolls;
    std::srand(std::time(0));
    for (int i = 0; i < numberOfRolls; i++)
    {
        rolls.push_back(std::rand() % 5 + 1);
    }

    // prints rolls
    for (int roll : rolls)
    {

        std::cout << roll << " ";
    }

    std::cout << std::endl;

    return rolls;
}



int main()
{
    int numberOfRolls;
    try
    {
        std::cout << "How many dice do you want throw? ";
        if (std::cin >> numberOfRolls)
        {
            generateNRandomDiceRolls(numberOfRolls);
        } else
        {
            throw numberOfRolls;
        }
        
    } catch (int x)
    {
        std::cout << "The input " << x << " is invalid. Throwing 5 dice instead..." << std::endl;
        generateNRandomDiceRolls();
    } 

    return 0;
}