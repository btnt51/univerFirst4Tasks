//
// Created by btnt51 on 10.09.2020.
//

#include "Cfrac.h"
#include <exception>

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

Cfrac Cfrac::operator+(int value) const
{
	Cfrac c(0,0);
	int downVal = 1;
	if(this->m_q== 0 && this->m_p == 0)
	{
		c.m_p = this->m_p + value;
		c.m_q = this-> m_q + downVal;
		return c;
	}
	else
	{
		if (this->m_q == downVal) {
			c.m_p= this->m_p + value;
			c.m_q = this->m_q;
			return c;
		}
		else
		{
			value = value * this->m_q;
			c.m_p = this->m_p + value;
			c.m_q = this->m_q;
			return c;
		}
	}
}

Cfrac Cfrac::operator+(const Cfrac& b) const
{
	Cfrac c(0,0);
	if(this->m_q== 0 && this->m_p == 0)
	{
		c.m_p += b.m_p ;
		c.m_q = b.m_q;
		return c;
	}
	else
	{
		if (this->m_q == b.m_q)
		{
			c.m_p = this->m_p + b.m_p;
			c.m_q = this->m_q;
			return c;
		}
		else
		{
			int l = this->m_p;
			int k = b.m_p;
			int g = this->m_q;
			int o = b.m_q;
			l *= o;
			k *= g;
			c.m_p = l + k;
			c.m_q = g * o;
			return c;
		}
	}
}

Cfrac Cfrac::operator-(int value) const
{
	Cfrac c(0,0);
	int downVal = 1;
	if(this->m_q == 0 && this->m_p == 0)
	{
		c.m_p= this->m_p + value;
		c.m_q= this->m_q + downVal;
		return c;
	}
	else
	{
		if (this->m_q == downVal)
	{
			c.m_p = this->m_p - value;
			c.m_q = this->m_q;
			return c;
		}
		else
		{
			value = value * this->m_q;
			c.m_p = this->m_p - value;
			c.m_q = this->m_q;
			return c;
		}
	}
}

Cfrac Cfrac::operator-(const Cfrac& b) const
{
	Cfrac c(0,0);
	if(this->m_q== 0 && this->m_p == 0)
	{
		c.m_p -= b.m_p ;
		c.m_q = b.m_q;
		return c;
	}
	else
	{
		if (this->m_q == b.m_q)
		{
			c.m_p = this->m_p - b.m_p;
			c.m_q = (this->m_q);
			return c;
		}
		else
		{
			int l = this->m_p;
			int k = b.m_p;
			int g = this->m_q;
			int o = b.m_q;
			l *= o;
			k *= g;
			c.m_p = l - k;
			c.m_q = g * o;
			return c;
		}
	}
}

void Cfrac::operator+=(int value)
{
	int downVal = 1;
	if(this->m_q== 0 && this->m_p == 0)
	{
		this->m_p += value;
		this->m_q = downVal;
	}
	else
	{
		if (this->m_q == downVal)
		{
			this->m_p += value;

		}
		else
		{
			value = value * this->m_q;
			this->m_p += value;
		}
	}
}

void Cfrac::operator+=(const Cfrac& b)
{
	if(this->m_q== 0 && this->m_p == 0)
	{
		this->m_p = b.m_p;
		this->m_q = b.m_q;
	}
	else
	{
		if (this->m_q == b.m_q)
		{
			this->m_p += b.m_p;
		}
		else
		{
			int l = this->m_p;
			int k = b.m_p;
			int g = this->m_q;
			int o = b.m_q;
			l *= o;
			k *= g;
			this->m_p = (l + k);
			this->m_q = (g * o);
		}
	}
}

Cfrac Cfrac::operator*(int value) const
{
	Cfrac c(0,0);
	c.m_p = (this->m_p * value);
	c.m_q = (this->m_q * 1);
	return c;
}

Cfrac Cfrac::operator*(const Cfrac& b) const
{
	Cfrac c(0,0);
	c.m_p = (this->m_p * b.m_p);
	c.m_q = (this->m_q * b.m_q);
	return c;
}

Cfrac Cfrac::operator/(int value) const
{
	Cfrac c(0,0);
	int downVal = 1;
	c.m_p = (this->m_p * downVal);
	c.m_q = (this->m_q * value);
	return c;
}

Cfrac Cfrac::operator/(const Cfrac& b) const
{
	Cfrac c(0,0);
	c.m_p = (this->m_p * b.m_q);
	c.m_q = (this->m_q * b.m_p);
	return c;
}

void Cfrac::operator*=(int value)
	{
	this->m_p = (this->m_p * value);
}

void Cfrac::operator*=(const Cfrac& b)
	{
	this->m_p = (this->m_p*b.m_p);
	this->m_q = (this->m_q*b.m_q);
}

void Cfrac::operator/=(int value)
	{
	this->m_q = (this->m_q * value);
}

void Cfrac::operator/=(const Cfrac& b)
{
	try
	{
		this->m_p = (this->m_p * b.m_q);
		this->m_q = (this->m_q * b.m_p);
	}
	catch(const std::exception& err)
	{
		std::cout << "Couldn`t div or mul on zero" << std::endl;
	}
}

