//
// Created by btnt51 on 10.09.2020.
//

#include "Cpoint.h"

Cpoint::Cpoint(double x, double y)
{
	this->m_x = x;
	this->m_y = y;
}

Cpoint::~Cpoint()
{

}

void Cpoint::inputXY()
{
	char const * str = "You must enter a real number";
	std::cout << "\nInput X->";
	m_x = inputData(m_x, str);
	std::cout << "\nInput Y->";
	m_y = inputData(m_y, str);
}

double Cpoint::lengthRadVector() const
{
    return sqrt((m_x*m_x) + (m_y*m_y));
}

Cpoint Cpoint::turnRadVecOnHRAD(double radian) const
{
	return Cpoint(m_x * cos(radian) + m_y * sin(radian),
			-m_x * sin(radian) + m_y * cos(radian));
}

Cpoint Cpoint::turnRadVecOnHGRAD(double degrees) const
{
	double Pi = 3.14;
	return Cpoint(m_x * cos(degrees/(180/Pi)) + m_y * sin(degrees / (180 / Pi)),
			-m_x * sin(degrees / (180 / Pi)) + m_y * cos(degrees / (180 / Pi)));
}
