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

Ccomplex &Ccomplex::operator*=(Ccomplex another)
{
	double buff_R = m_realVal * another.m_realVal - m_imagVal * another.m_imagVal;
	double buff_I = m_realVal * another.m_imagVal + another.m_realVal * m_imagVal;
	this->m_realVal = buff_R;
	this->m_imagVal = buff_I;
	return *this;
}

Ccomplex Ccomplex::operator/(const Ccomplex &another)
{
	auto k = (pow(another.m_realVal, 2) + pow(another.m_imagVal, 2));

	return Ccomplex(((m_realVal * another.m_realVal + m_imagVal * another.m_imagVal) / k)
			, ((m_imagVal * another.m_realVal - m_realVal * another.m_imagVal) / k));
}

Ccomplex &Ccomplex::operator=(Ccomplex another)
{
	this->m_realVal = another.m_realVal;
	this->m_imagVal = another.m_imagVal;
	return *this;
}
