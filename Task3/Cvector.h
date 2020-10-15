//
// Created by btnt51 on 14.09.2020.
//

#ifndef UNIVERFIRST4TASKS_CVECTOR_H
#define UNIVERFIRST4TASKS_CVECTOR_H

#include "../headers/includes.h"
#include <iomanip>

class Cvector
{
private:
	double m_x = 0, m_y = 0, m_z = 0;
public:
	Cvector();
	Cvector(int x, int y, int z);
	~Cvector();
	void print() const;

};


#endif //UNIVERFIRST4TASKS_CVECTOR_H
