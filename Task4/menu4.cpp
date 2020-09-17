//
// Created by btnt51 on 16.09.2020.
//
#include "Ccomplex.h"
void menu4()
{
	Ccomplex a(8, 1);
	Ccomplex b(5, 1);
	Ccomplex c;

	c = a / b;

	std::cout << c.getReal() <<"|" << c.getImag()<< std::endl;


	b *= a;
	std::cout << b.getReal() << "|" << b.getImag() << std::endl;

}