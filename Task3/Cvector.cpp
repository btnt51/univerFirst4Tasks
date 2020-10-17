//
// Created by btnt51 on 14.09.2020.
//

#include "Cvector.h"


Cvector::Cvector() {}

Cvector::~Cvector() {}

Cvector::Cvector(int x, int y, int z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

void Cvector::print() const
{
	std::cout << "coordinate by x =" << std::setw(5) << this->m_x << std::endl;
	std::cout << "coordinate by y = " << std::setw(4) << this->m_y << std::endl;
	std::cout << "coordinate by z = " << std::setw(4) << this->m_z << std::endl;
}

void Cvector::menu()
{
	Cvector vec(1,5,10);
	vec.print();
}
