//
// Created by btnt51 on 12.09.2020.
//

#include "Cstudent.h"

Cstudent::Cstudent()
{

}

Cstudent::~Cstudent()
{

}

void Cstudent::input_stud()
{
	this->input();
	std::cout << "Please enter a Faculty of student";
	std::cin >> m_Faculty;
	std::cout << "Enter a group number of a student";
	char const *str = "Wrong input. Please enter a group number in integer.";
	this->m_GroupNumber = inputData(this->m_GroupNumber, str);
	bool True = true;
	while(True)
	{
		try
		{
			if(this->m_GroupNumber < 0)
			{
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
			std::cout << "Wrong input. Please enter a group number of a student in "
						 "integer above zero." << std::endl;
			this->m_GroupNumber = inputData(this->m_GroupNumber, str);
		}
	}
}

void Cstudent::printInfo()
{
	std::cout << "\nStudent Name->" << this->m_Name
		 << "\nStudent Year->"<< this->m_Year
		 << "\nStudent Faculty->"<<this->m_Faculty
		 << "\nStudent GroupNumber->"<< this->m_GroupNumber;
}

void Cstudent::changeName() {
	std::cout << "Enter a new name for student ";
	std::cin >> this->m_Name;
}