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

<<<<<<< Updated upstream
void Ccomplex::menu()
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
}
=======
void Ccomplex::Enter()
{
    char const* str = "You must enter a real number";
    std::cout << "\nInput real->";
    m_realVal = inputData(m_realVal, str);
    std::cout << "\nInput imag->";
    m_realVal = inputData(m_realVal, str);
}
>>>>>>> Stashed changes
