//
// Created by btnt51 on 16.09.2020.
//
#include "Ccomplex.h"
#include "../Task1/Cfrac.h"

void menu4()
{
    Ccomplex a(0.0, 0.0);
    a.Enter();
    Ccomplex b(0.0, 0.0);
    b.Enter();
    double br = b.getReal();
    double bi = b.getImag();
    while ((br == 0.0) && (bi == 0.0))
    {
        std::cout << "You must enter an integer that doesn`t equal to zero" << std::endl;
        b.Enter();
        br = b.getReal();
        bi = b.getImag();
    }
    Ccomplex c(0.0, 0.0);

    std::cout << a.getReal() << " + " << a.getImag() << "i" << std::endl;
    std::cout << b.getReal() << " + " << b.getImag() << "i" << std::endl;
    std::cout << c.getReal() << " + " << c.getImag() << "i" << std::endl;
    c = a / b;
    std::cout << c.getReal() << "+" << c.getImag()<< "i" << std::endl;
    b *= a;
    std::cout << b.getReal() << "+" << b.getImag() << "i" << std::endl;
	std::cout << "--------------------Cfac--------------------" << std::endl;

}