//
// Created by btnt51 on 10.09.2020.
//
#include "Cpoint.h"
#include "Cfrac.h"

void menu1()
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

	std::cout << "<---------------Cfrac-------------->" << std::endl;
	Cfrac frac(0, 0);
	frac.inputPQ();
	std::cout << frac.getP();
	std::cout << frac.getQ();

	std::cout << "\nFraction In Number= "<< frac.toNumber();


	auto frac1 = frac.toSimple();
	std::cout << "\nP/Q=" << frac1.getP()<<'/'<< frac1.getQ() << std::endl;
}
