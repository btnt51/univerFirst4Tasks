//
// Created by btnt51 on 10.09.2020.
//

#include "Cfrac.h"

Cfrac::~Cfrac()
= default;

Cfrac::Cfrac(int p, int q)
{
	m_p = p;
	m_q = q;
}

double Cfrac::toNumber()
{
	return static_cast<double>(m_p)/ static_cast<double>(m_q);
}

Cfrac Cfrac::toSimple()
{
	auto Gcd = std::gcd(m_p,m_q);
	return Cfrac(m_p/Gcd, 0);
}
