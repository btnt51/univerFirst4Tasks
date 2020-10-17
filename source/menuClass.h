//
// Created by btnt51 on 17.10.2020.
//

#ifndef UNIVERFIRST4TASKS_MENUCLASS_H
#define UNIVERFIRST4TASKS_MENUCLASS_H


class menuClass
{
private:
	int m_choiceMenu = 0, m_choiceClass = 0;

public:
	menuClass();
	~menuClass();
	void menu();
	int chooseMenu();
	template<class T, class T2>
	void startWorkWithClass(T, T2);
	template<class T, class T2, class T3>
	void startWorkWithClass(T, T2, T3);

};


#endif //UNIVERFIRST4TASKS_MENUCLASS_H
