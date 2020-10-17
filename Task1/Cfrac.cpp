//
// Created by btnt51 on 10.09.2020.
//

#include "Cfrac.h"


Cfrac::~Cfrac()
{

}

Cfrac::Cfrac(int p, int q)
{
    if(q < 0)
    {
        m_p = -p;
        m_q = abs(q);
    }
    else
    {
        m_p = p;
        m_q = q;
    }
}

double Cfrac::toNumber() const
{
	return static_cast<double>(m_p)/ static_cast<double>(m_q);
}

Cfrac Cfrac::toSimple() const
{
	int gcd = std::gcd(m_p, m_q);
	return Cfrac(m_p/gcd, m_q/gcd);
}

void Cfrac::inputPQ()
{
	char const * str = "You must enter an integer";
	char const * str2 = "You must enter an integer that doesn`t equal to zero";
	std::cout << "\nEnter P:";
	int ptemp =0;
	ptemp = inputData(ptemp, str);
	std::cout << "\nEnter Q:";
    int qtemp = 0;
    qtemp = inputData(qtemp, str);
	while(qtemp == 0)
	{
		std::cout << "Denominator could not equal to zero. "
			   "Please enter again denominator" << std::endl;
        qtemp = inputData(qtemp, str2);
	}
	if(qtemp < 0)
    {
	    m_p = -ptemp;
	    m_q = abs(qtemp);
    }
	else
    {
        m_p = ptemp;
        m_q = qtemp;
    }
}

Cfrac Cfrac::operator+(const Cfrac& b) const
{
	int LCM = this->m_q * b.m_q / std::gcd(this->m_q, b.m_q);

	return Cfrac(((this->m_p * (LCM / this->m_q)) + (b.m_p * (LCM / b.m_q))), LCM);
}

Cfrac Cfrac::operator-(const Cfrac& b) const
{
	int LCM = this->m_q * b.m_q / std::gcd(this->m_q, b.m_q);

	return Cfrac(((this->m_p * (LCM / this->m_q)) - (b.m_p * (LCM / b.m_q))), LCM);
}

Cfrac Cfrac::operator*(const Cfrac& b) const
{
	return Cfrac((this->m_p* b.m_p), (this->m_q * b.m_q));
}

Cfrac Cfrac::operator/(const Cfrac& b) const
{
	if (b.m_p == 0 || this->m_p == 0)
		throw 0;
	return Cfrac((this->m_p * b.m_q), (this->m_q * b.m_p));
}

void Cfrac::menu()
{
	Cfrac A(0, 0);
	Cfrac B(0, 0);
	A.inputPQ();
	B.inputPQ();
	Cfrac C(0, 0);
	try
	{
		std::cout << "A= " ;
		std::cout << A.getP() << "/";
		std::cout << A.getQ() << std::endl;
		std::cout << "B= " ;
		std::cout << B.getP() << "/";
		std::cout << B.getQ() << std::endl;
		C = A/B;
		C.toSimple();
		std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
	}
	catch (int a)
	{
		std::cout << "We can`t div on zero!" << std::endl;
	}
}
