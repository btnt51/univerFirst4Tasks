//
// Created by btnt51 on 12.09.2020.
//
#include "../headers/includes.h"

int inputData(int number, char const* str)
{
	bool validInput;
	std::cin.exceptions(std::ifstream::failbit);
	do
	{
		try
		{
			validInput = true;
			std::cin >> number;
		}
		catch (std::ios_base::failure &fail)
		{
			validInput = false;
			std::cin.clear();
			std::string dummy;
			std::cin >> dummy;
			std::cout << str << std::endl;
		}
	} while(!validInput);
	return number;
}

double inputData(double number, char const* str)
{
	bool validInput;
	std::cin.exceptions(std::ifstream::failbit);
	do
	{
		try
		{
			validInput = true;
			std::cin >> number;
		}
		catch (std::ios_base::failure &fail)
		{
			validInput = false;
			std::cin.clear();
			std::string dummy;
			std::cin >> dummy;
			std::cout << str << std::endl;
		}
	} while(!validInput);
	return number;
}