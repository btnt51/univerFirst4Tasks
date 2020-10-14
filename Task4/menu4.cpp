//
// Created by btnt51 on 16.09.2020.
//
#include "Ccomplex.h"
#include "../Task1/Cfrac.h"

void menu4()
{
	Ccomplex a(8, 1);
	Ccomplex b(5, 1);
	Ccomplex c;

	c = a / b;
	std::cout << "c = a / b \t(a(8,5) b(5,1))" << std::endl;
	std::cout << "c-real " << c.getReal() << " | " << "c-imag " << c.getImag()<< std::endl;


	b *= a;
	std::cout << "b *= a \t(a(8,5) b(5,1))" << std::endl;
	std::cout << "b-real " << b.getReal() << " | " << "b-imag " << b.getImag() << std::endl;

	std::cout << "--------------------Cfac--------------------" << std::endl;
	Cfrac A(1, 2);
	Cfrac B(1, 4);
	Cfrac C(0, 0);
	try
	{
		C = A/B;

		std::cout << C.getP() << "/";
		std::cout << C.getQ();

		auto D = C.toSimple();
		std::cout << "\nP/Q=" << D.getP() << '/' << D.getQ() << "=" << D.toNumber() << std::endl;

	}
	catch (int a)
	{
		std::cout << "We can`t div on zero!" << std::endl;
	}

}