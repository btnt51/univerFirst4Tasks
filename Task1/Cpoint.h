//
// Created by btnt51 on 10.09.2020.
//

#ifndef UNIVERFIRST4TASKS_CPOINT_H
#define UNIVERFIRST4TASKS_CPOINT_H
#include "../headers/includes.h"

class Cpoint
{
private:
    double m_x = 0.0, m_y = 0.0;
public:
	Cpoint(double x, double y);
	~Cpoint();
    double lengthRadVector() const;
    double getX() const {return m_x;}
	double getY() const {return m_y;}
    Cpoint turnRadVectorOnH(double radian) const;
	void inputXY();
};


#endif //UNIVERFIRST4TASKS_CPOINT_H
