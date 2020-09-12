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
	std::cout << "\nInput X->";
	std::cin >> m_x;
	std::cout << "\nInput Y->";
	std::cin >> m_y;
}

double Cpoint::lengthRadVector()
{
    return sqrt((m_x*m_x) + (m_y*m_y));
}

Cpoint Cpoint::turnRadVectorOnH(double radian)
{
	return Cpoint(m_x * cos(radian) + m_y * sin(radian), -m_x * sin(radian) + m_y * cos(radian));
}

