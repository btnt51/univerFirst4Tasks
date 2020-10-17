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

void Cpoint::menu()
{
	std::cout << "<---------------Cpoint-------------->" << std::endl;
	Cpoint point(0.0,0.0);
	point.inputXY();
	std::cout << "\nx=" << point.getX()<< std::endl;
	std::cout << "\ny=" << point.getY() << std::endl;
	std::cout <<"LongVector"<< point.lengthRadVector() << std::endl;
	std::cout << "Choose how u want to turn radius vector."
				 " \nType r if u want to use radians"
				 "\nType d if u want to use degrees" << std::endl;
	char select = ' ';
	std::cin >> select;
	while ((select != 'r') && (select != 'd')&&(select !='R') && ( select!='D'))
	{
		std::cout << "\nYou entered an invalid value."
					 "Repeat one more time." << std::endl;
		std::cin >> select;
	}
	if ((select == 'd') || (select =='D'))
	{
		char const * str = "Wrong inputed data, reenter degree in real number";
		double degrees = 0.0;
		std::cout << "\nInput h-> ";
		degrees = inputData(degrees, str);
		auto point1 = point.turnRadVecOnHGRAD(degrees);
		std::cout << "\nRotation of a vector by " << degrees << " degree its coordinates ";
		std::cout << "\nx=" << point1.getX() << " y=" << point1.getY()
				  << std::endl;
	}
	if ((select == 'r') || (select =='R'))
	{
		char const * str = "Wrong inputed data, reenter radian in real number";
		double radian = 0.0;
		std::cout << "\nInput h-> ";
		radian = inputData(radian, str);
		auto point1 = point.turnRadVecOnHRAD(radian);
		std::cout << "\nRotation of a vector by " << radian << " radian its coordinates " ;
		std::cout << "\nx=" << point1.getX() << " y=" << point1.getY() << std::endl;
	}
}
