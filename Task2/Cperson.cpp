//
// Created by btnt51 on 12.09.2020.
//

#include "Cperson.h"

Cperson::Cperson()
{

}

Cperson::~Cperson()
{

}

void Cperson::input()
{
	bool True = true;
	std::cout << "Enter name of a person";
	std::cin >> this->m_Name;
	std::cout << "Enter year of birth of a person";
	char const *str = "Wrong input. Please enter a year of birth in integer.";
	this->m_Year = inputData(this->m_Year, str);
	True = true;
	while(True)
	{
		try
		{
			if(this->m_Year < 0)
			{
				True = true;
				throw -1;
			}
			else
			{
				True = false;
				break;
			}
		}
		catch (int i)
		{
			True = true;
			std::cout << "Wrong input. Please enter a year of birth in "
				"integer above zero." << std::endl;
			this->m_Year = inputData(this->m_Year, str);
		}
	}
}