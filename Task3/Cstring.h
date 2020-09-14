//
// Created by btnt51 on 14.09.2020.
//

#ifndef UNIVERFIRST4TASKS_CSTRING_H
#define UNIVERFIRST4TASKS_CSTRING_H
#include "../headers/includes.h"

class Cstring
{
private:
	char * m_string;
	int m_length;
public:
	Cstring();
	Cstring(char const *str);
	~Cstring();
	void output();
	int getLen() const{ return m_length;}
	//Cstring operator= (const Cstring str);
	Cstring operator+= (const Cstring str);

};


#endif //UNIVERFIRST4TASKS_CSTRING_H
