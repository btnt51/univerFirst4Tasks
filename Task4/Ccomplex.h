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
	Ccomplex(double RealVal, double ImagVal);
	~Ccomplex();
	Ccomplex& operator*=(const Ccomplex& another);
	Ccomplex operator / (const Ccomplex& another) const;
	Ccomplex& operator =(const Ccomplex& another);
    void Enter();
	double getReal() const{ return m_realVal; }
	double getImag() const{ return m_imagVal; }

	void menu();

};


#endif //UNIVERFIRST4TASKS_CCOMPLEX_H
