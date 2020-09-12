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
	std::cout << "Enter name of a person";
	std::cin >> m_Name;
	std::cout << "Enter year of birth of a person";
	char const *str = "Wrong input. Please enter a year of birth in integer.";
	m_Year = inputData(m_Year, str);
	bool True = true;
	while(True)
	{
		try
		{
			if (m_Year < 0)
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
			m_Year = inputData(m_Year, str);
		}
	}
}