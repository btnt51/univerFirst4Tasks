//
// Created by btnt51 on 16.09.2020.
//

#ifndef UNIVERFIRST4TASKS_CCOMPLEX_H
#define UNIVERFIRST4TASKS_CCOMPLEX_H
#include "../headers/includes.h"

class Ccomplex
{
private:
	double m_realVal;
	double m_imagVal;

public:
	Ccomplex();
	Ccomplex(double _RealVal, double _ImagVal);
	~Ccomplex();
	Ccomplex& operator*=(Ccomplex other);
	Ccomplex operator / (const Ccomplex& other);
	Ccomplex& operator =(Ccomplex other);

	double getReal(){return m_realVal;}
	double getImag(){return m_imagVal;}

	void menu();

};


#endif //UNIVERFIRST4TASKS_CCOMPLEX_H
