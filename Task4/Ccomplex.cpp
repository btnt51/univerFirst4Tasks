//
// Created by btnt51 on 16.09.2020.
//

#include "Ccomplex.h"

Ccomplex::Ccomplex()
{
	this->m_realVal = 0.0;
	this->m_imagVal = 0.0;
}

Ccomplex::Ccomplex(double RealVal, double ImagVal)
{
	this->m_realVal = RealVal;
	this->m_imagVal = ImagVal;
}

Ccomplex::~Ccomplex()
{

}

Ccomplex &Ccomplex::operator*=(const Ccomplex& another)
{
	double buff_R = m_realVal * another.m_realVal - m_imagVal * another.m_imagVal;
	double buff_I = m_realVal * another.m_imagVal + another.m_realVal * m_imagVal;
	this->m_realVal = buff_R;
	this->m_imagVal = buff_I;
	return *this;
}

Ccomplex Ccomplex::operator/(const Ccomplex &another) const
{
	auto k = (pow(another.m_realVal, 2) + pow(another.m_imagVal, 2));

	return Ccomplex(((m_realVal * another.m_realVal + m_imagVal * another.m_imagVal) / k)
			, ((m_imagVal * another.m_realVal - m_realVal * another.m_imagVal) / k));
}

Ccomplex &Ccomplex::operator=(const Ccomplex& another)
{
	this->m_realVal = another.m_realVal;
	this->m_imagVal = another.m_imagVal;
	return *this;
}


void Ccomplex::menu()
{
    std::cout << "Enter a" << std::endl;
    Ccomplex a(0.0, 0.0);
    a.Enter();
    std::cout << "Enter b" << std::endl;
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

    std::cout << "a = "<< a.getReal() << " + " << a.getImag() << "i" << std::endl;
    std::cout << "b = "<< b.getReal() << " + " << b.getImag() << "i" << std::endl;
    std::cout << "c = "<< c.getReal() << " + " << c.getImag() << "i" << std::endl;
    c = a / b;
    std::cout <<"c = a / b = ";
    std::cout << c.getReal() << "+" << c.getImag()<< "i" << std::endl;
    b *= a;
    std::cout <<" b *= a = ";
    std::cout << b.getReal() << "+" << b.getImag() << "i" << std::endl;
}
void Ccomplex::Enter()
{
    char const* str = "You must enter a real number";
    std::cout << "\nInput real->";
    m_realVal = inputData(m_realVal, str);
    std::cout << "\nInput imag->";
    m_imagVal = inputData(m_imagVal, str);
}

