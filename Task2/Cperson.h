//
// Created by btnt51 on 12.09.2020.
//

#ifndef UNIVERFIRST4TASKS_CPERSON_H
#define UNIVERFIRST4TASKS_CPERSON_H

#include "../headers/includes.h"
class Cperson
{
protected:
	std::string m_Name = "";
	int m_Year = 0;
public:
	Cperson();
	~Cperson();
	void input();
	Cperson(std::string Name, int Year)
	{
		m_Name = Name;
		std::cout << m_Name << std::endl;
		m_Year = Year;
		std::cout << m_Year;//ограничить
	}
	void menu()
	{
		Cperson person("Alina", 2001);
	}
};


#endif //UNIVERFIRST4TASKS_CPERSON_H
