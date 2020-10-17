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

}