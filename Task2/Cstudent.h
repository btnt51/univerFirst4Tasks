//
// Created by btnt51 on 12.09.2020.
//

#ifndef UNIVERFIRST4TASKS_CSTUDENT_H
#define UNIVERFIRST4TASKS_CSTUDENT_H
#include "Cperson.h"

class Cstudent : protected Cperson
{
private:
	std::string m_Faculty = "";
	int m_GroupNumber = 0;

public:
	Cstudent();
	~Cstudent();
	void input_stud();
	void printInfo();
};


#endif //UNIVERFIRST4TASKS_CSTUDENT_H
