//
// Created by btnt51 on 14.09.2020.
//

#include "Ctimer.h"

Ctimer::Ctimer(int min, int sec)
{
	m_min = min;
	if(sec >= 60)
	{
		int addMin = sec / 60;
		int addSec = sec % 60;
		m_min += addMin;
		m_sec = addSec;
	}
	else
	{
		m_sec = sec;
	}

	std::cout << "\nminutes: " << m_min << " seconds: " << m_sec << std::endl;
}

Ctimer::Ctimer(int sec)
{
	if(sec >= 60)
	{
		int addMin = sec / 60;
		int addSec = sec % 60;
		m_min += addMin;
		m_sec = addSec;
	}
	else
	{
		m_sec = sec;
	}
	std::cout << "\nminutes: " << m_min << " seconds: " << m_sec << std::endl;
}

Ctimer::~Ctimer()
{

}

void Ctimer::menu()
{
	Ctimer testMin(5,60);
	Ctimer testSec(60);
}