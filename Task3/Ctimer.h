//
// Created by btnt51 on 14.09.2020.
//

#ifndef UNIVERFIRST4TASKS_CTIMER_H
#define UNIVERFIRST4TASKS_CTIMER_H
#include "../headers/includes.h"

class Ctimer
{
private:
	int m_min = 0;
	int m_sec = 0;
public:
	Ctimer(int min, int sec);
	Ctimer(int sec);
	~Ctimer();

};


#endif //UNIVERFIRST4TASKS_CTIMER_H
