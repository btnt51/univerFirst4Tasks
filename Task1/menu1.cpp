//
// Created by btnt51 on 10.09.2020.
//
#include "../headers/includes.h"

void menu1()
{
	const double pi = 3.14;
	double i = 15;
	Cpoint point(0.0,0.0);
	point.inputXY();
	std::cout << "\nx=" << point.getX()<< std::endl;
	std::cout << "\ny=" << point.getY() << std::endl;
	std::cout <<"LongVector"<< point.lengthRadVector() << std::endl;

	auto point1 = point.turnRadVectorOnH(pi / i);

	std::cout << "Rotation of a vector by 15 radians its coordinates"<<  " x=" << point1.getX()
		 <<" y=" << point1.getY() << std::endl;

	Cfrac frac(0, 0);

	frac.inputPQ();
	std::cout << frac.getP();
	std::cout << frac.getQ();

	std::cout << "\nFraction In Number= "<< frac.toNumber();


	auto frac1 = frac.toSimple();
	std::cout << "\nP/Q=" << frac1.getP()<<'/'<< frac1.getQ() << std::endl;
}
