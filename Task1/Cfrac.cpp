//
// Created by btnt51 on 10.09.2020.
//

#include "Cfrac.h"

Cfrac::~Cfrac()
{

}

Cfrac::Cfrac(int p, int q)
{
	m_p = p;
	m_q = q;

}

double Cfrac::toNumber() const
{
	return static_cast<double>(m_p)/ static_cast<double>(m_q);
}

Cfrac Cfrac::toSimple() const
{
	int Gcd = std::gcd(m_p,m_q);
	return Cfrac(m_p/Gcd, m_q/Gcd);
}

void Cfrac::inputPQ()
{
	char const * str = "You must enter an integer";
	char const * str2 = "You must enter an integer that doesn`t equal to zero";
	std::cout << "\nEnter P:";
	m_p = inputData(m_p, str);
	std::cout << "\nEnter Q:";
	m_q = inputData(m_q, str);
	while(m_q == 0)
	{
		std::cout << "Denominator could not equal to zero. "
			   "Please enter again denominator" << std::endl;
		m_q = inputData(m_q, str2);
	}
}