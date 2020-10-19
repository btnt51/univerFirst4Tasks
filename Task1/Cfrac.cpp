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
    /*if(p == 0)
    {
        throw -2.0;
    }
    else
    {
        m_p = p;
        m_q = q;
    }*/
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
	int ptemp = 0;
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
    if(ptemp == 0)
    {
        m_p = 0;
        m_q = 0;
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

Cfrac Cfrac::operator+( int value) const
{
    return Cfrac(this->m_p + (value * this->m_q), m_q);
}



Cfrac Cfrac::operator-(const Cfrac& b) const
{
	int LCM = this->m_q * b.m_q / std::gcd(this->m_q, b.m_q);

	return Cfrac(((this->m_p * (LCM / this->m_q)) - (b.m_p * (LCM / b.m_q))), LCM);
}

Cfrac Cfrac::operator-( int value) const
{
    return Cfrac(this->m_p - (value * this->m_q), m_q);
}


Cfrac Cfrac::operator*(const Cfrac& b) const
{
	return Cfrac((this->m_p* b.m_p), (this->m_q * b.m_q));
}

Cfrac Cfrac::operator*(int value) const
{
    return Cfrac((this->m_p * value), (this->m_q));
}

Cfrac Cfrac::operator/(const Cfrac& b) const
{
	if (b.m_p == 0 || this->m_p == 0)
		throw 0;
	return Cfrac((this->m_p * b.m_q), (this->m_q * b.m_p));
}

Cfrac Cfrac::operator/(int value) const
{
    if (value == 0 || this->m_p == 0)
        throw 0;
    return Cfrac((this->m_p), (this->m_q * value));
}

void Cfrac::menu()
{
    while(true)
    {
        std::cout << "Press 1 - to select CfracCfrac class\nPress 2 - to select CfracValue class" << std::endl;
        int action = 0;
        action = inputData(action,"You must enter an integer");
        while(true)
        {
            if (action < 1 || action > 2)
            {
                action = inputData(action, "You must enter an integer from 1 to 2");
            }
            else
            {
                break;
            }
        }
        switch(action)
        {
            case 1:
                menuCfracCfrac();
                break;
            case 2:
                menuCfracValue();
                break;
            default:
                break;
        }
        std::cout << "Press 1 if you want to continue working with the selected class\nPress 0 to exit to task menu" << std::endl;
        action = inputData(action,"You must enter an integer");
        while(true)
        {
            if (action < 0 || action > 1)
            {
                action = inputData(action, "You must enter an integer from 0 to 1");
            }
            else
            {
                break;
            }
        }
        if(action == 0)
            break;
    }
}

void Cfrac::menuCfracCfrac()
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
        int action = 0;
        std::cout << "Press:\n1 to perform the addition operation(+)\n2 to perform the subtraction operation(-)\n3 to perform multiplication(*)\n4 to perform a division operation(/)" << std::endl;
        action = inputData(action,"You must enter an integer");
        while(true)
        {
            if (action < 1 || action > 4)
            {
                action = inputData(action, "You must enter an integer from 1 to 4");
            }
            else
            {
             break;
            }
        }
        switch(action)
        {
            case 1:
                C = A+B;
                C.toSimple();
                std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
                break;
            case 2:
                C = A-B;
                C.toSimple();
                std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
                break;
            case 3:
                C = A *B;
                C.toSimple();
                std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
                break;
            case 4:
                C = A/B;
                C.toSimple();
                std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
                break;
            default:
                break;
        }

    }
    catch (int a)
    {
        std::cout << "We can`t div on "<< a << "!" << std::endl;
    }
}


void Cfrac::menuCfracValue()
{
    Cfrac A(0, 0);
    int B =0;
    A.inputPQ();
    std::cout << "Enter an integer" << std::endl;
    B = inputData(B, "You must enter an integer") ;
    Cfrac C(0, 0);
    try
    {
        std::cout << "A= " ;
        std::cout << A.getP() << "/";
        std::cout << A.getQ() << std::endl;
        std::cout << "B= " << B << std::endl;
        int action = 0;
        std::cout << "Press:\n1 to perform the addition operation(+)\n2 to perform the subtraction operation(-)\n3 to perform multiplication(*)\n4 to perform a division operation(/)" << std::endl;
        action = inputData(action,"You must enter an integer");
        while(true)
        {
            if (action < 1 || action > 4)
            {
                action = inputData(action, "You must enter an integer from 1 to 4");
            }
            else
            {
                break;
            }
        }
        switch(action)
        {
            case 1:
                C = A+B;
                C.toSimple();
                std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
                break;
            case 2:
                C = A-B;
                C.toSimple();
                std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
                break;
            case 3:
                C = A *B;
                C.toSimple();
                std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
                break;
            case 4:
                C = A/B;
                C.toSimple();
                std::cout << "\nP/Q=" << C.getP() << '/' << C.getQ() << "=" << C.toNumber() << std::endl;
                break;
            default:
                break;
        }
    }
    catch (int a)
    {
        std::cout << "We can`t div on "<< a << "!" << std::endl;
    }
}