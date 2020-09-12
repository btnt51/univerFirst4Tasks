//
// Created by btnt51 on 10.09.2020.
//

#ifndef UNIVERFIRST4TASKS_CFRAC_H
#define UNIVERFIRST4TASKS_CFRAC_H
#include "../headers/includes.h"

class Cfrac
{
private:
	int m_p = 0, m_q = 0;
public:
	Cfrac(int p, int q);
	~Cfrac();
	int getP(){return m_p;}
	int getQ(){return m_q;}
	double toNumber() const;
	Cfrac toSimple() const;
	void inputPQ();
};


#endif //UNIVERFIRST4TASKS_CFRAC_H
