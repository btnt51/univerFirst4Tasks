//
// Created by btnt51 on 14.09.2020.
//

#include "Cstring.h"
#include <cstring>

Cstring::Cstring()
{
	this->m_string = nullptr;
	this->m_length = 0;
}

Cstring::Cstring(const char *str)
{
	this->m_length = strlen(str);
	this->m_string = new char[m_length+1];
	for (int i = 0; i < m_length; i++)
		this->m_string[i] = str[i];
	this->m_string[m_length] = '\0';
}

Cstring::~Cstring()
{
	delete [] this->m_string;
}

void Cstring::output()
{
	std::cout << m_string << std::endl;
}

void Cstring::menu()
{
	Cstring str("Hello world");
	str.output();
}
