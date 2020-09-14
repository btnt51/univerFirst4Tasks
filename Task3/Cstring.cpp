//
// Created by btnt51 on 14.09.2020.
//

#include "Cstring.h"
#include <string.h>

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

	this->m_string[m_length+1] = '\0';
}

Cstring::~Cstring()
{
	delete [] this->m_string;
}

void Cstring::output()
{
	std::cout << m_string << std::endl;
}

/*Cstring Cstring::operator=(Cstring str)
{
	if (this->m_string != nullptr)
	{
		delete[] this->m_string;
	}

	m_length = strlen(str.m_string);
	this->m_string = new char[m_length + 1];
	char * copyStr = str.m_string;
	for (int i = 0; i < m_length; i++)
	{
		this->m_string[i] = copyStr[i];
	}

	this->m_string[m_length] = '\0';

	return *this;
}*/

Cstring Cstring::operator+=(Cstring str)
{
	int i = 0;
	char * firstCopyStr = this->m_string;
	char * secondCopyStr = str.m_string;
	int new_length = m_length + str.getLen();
	delete[] this->m_string;
	this->m_string = new char[new_length+10];
	for(int i = 0; i < this->m_length; i++)
		this->m_string[i] = firstCopyStr[i];
	for(i; i < (new_length-m_length);i++)
		this->m_string[i] = secondCopyStr[i];
	m_length = new_length;
	this->m_string[m_length+2] = '\0';
	return *this;
}
