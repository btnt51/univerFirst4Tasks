//
// Created by btnt51 on 17.10.2020.
//

#include "menuClass.h"
#include "../headers/includes.h"
#include "../Task1/Cfrac.h"
#include "../Task1/Cpoint.h"
#include "../Task2/Cstudent.h"
#include "../Task3/Cstring.h"
#include "../Task3/Cvector.h"
#include "../Task3/Ctimer.h"
#include "../Task4/Ccomplex.h"

menuClass::menuClass()
{

}


menuClass::~menuClass()
{

}


void menuClass::menu()
{

	std::cout << "\nHello in my second program!" << std::endl;
	while(true)
	{
        TextMenu();
		std::cout << "Enter a number from 1 to 4 of task that you want to execute or write 0 to exit"
					 " from program " << std::endl;
		switch (chooseMenu())
		{
			case 0:
                TextMenu();
				exit(0);
			case 1:
			{
				Cfrac obj1(0, 0);//1
				Cpoint obj2(0, 0);//2
				startWorkWithClass(obj1, obj2);
				break;
			}
			case 2:
			{
				Cstudent obj1;//1
				Cperson obj2;//2
				startWorkWithClass(obj1, obj2);
				break;
			}
			case 3:
			{
				Cvector obj1(0, 0,0);//1
				Ctimer obj2(0, 0);//2
				Cstring obj3;//3
				startWorkWithClass(obj1, obj2, obj3);
				break;
			}
			case 4:
			{
				Cfrac obj1(0, 0);//1
				Ccomplex obj2(0, 0);//2
				startWorkWithClass(obj1, obj2);
				break;
			}
			default:
				break;
		}
	}
}


int menuClass::chooseMenu()
{
	char const * str = "You put a wrong number, reenter a number of task from 1 to 4 or 0 to exit.";
	m_choiceMenu = inputData(m_choiceMenu, str);
	if (m_choiceMenu < 0 || m_choiceMenu > 4)
	{
		std::cout << "You put a wrong number, reenter a number of task from 1 to 4 or 0 to exit." << std::endl;
		m_choiceMenu = inputData(m_choiceMenu, str);
	}
	return m_choiceMenu;
}


template<class T, class T2>
void menuClass::startWorkWithClass(T obj, T2 obj2)
{
	bool t = true;
    std::cout << "Enter 1 or 2 to choose the class or 0 to exit from this task" << std::endl;
	while(t)
	{
        TextMenu();
		char const *str = "You put a wrong number, reenter a number from 1 to 2 or 0 to exit.";
		m_choiceClass = inputData(m_choiceClass, str);
		if (m_choiceClass < 0 || m_choiceClass > 2)
		{
			std::cout << "You put a wrong number, reenter a number from 1 to 2 or 0 to exit." << std::endl;
			m_choiceClass = inputData(m_choiceClass, str);
		}
		switch (m_choiceClass)
		{
			case 1:
				obj.menu();
                std::cout << "\nIf u want to continue work with this task enter 1 or 2 to choose the class "
                             "or 0 to exit from this task" << std::endl;
				break;
			case 2:
				obj2.menu();
                std::cout << "\nIf u want to continue work with this task enter 1 or 2 to choose the class "
                             "or 0 to exit from this task" << std::endl;
				break;
			case 0:
				t = false;
				break;
			default:
				break;
		}

	}
    m_choiceMenu = -1;
}

template<class T, class T2, class T3>
void menuClass::startWorkWithClass(T obj, T2 obj2, T3 obj3)
{
	bool t = true;
    std::cout << "Enter from 1 to 3 to choose the class or 0 to exit from this task" << std::endl;
	while(t)
	{
        TextMenu();
		char const *str = "You put a wrong number, reenter a number from 1 to 3 or 0 to exit.";
		m_choiceClass = inputData(m_choiceClass, str);
		if (m_choiceClass < 0 || m_choiceClass > 3)
		{
			std::cout << "You put a wrong number, reenter a number from 1 to 3 or 0 to exit." << std::endl;
			m_choiceClass = inputData(m_choiceClass, str);
		}
		switch (m_choiceClass)
		{
			case 1:
				obj.menu();
                std::cout << "\nIf u want to continue work with this task enter from 1 to 3 to choose the class "
                             "or 0 to exit from this task" << std::endl;
				break;
			case 2:
				obj2.menu();
                std::cout << "\nIf u want to continue work with this task enter from 1 to 3 to choose the class "
                             "or 0 to exit from this task" << std::endl;
				break;
			case 3:
				obj3.menu();
                std::cout << "\nIf u want to continue work with this task enter from 1 to 3 to choose the class "
                             "or 0 to exit from this task" << std::endl;
				break;
			case 0:
				t = false;
				break;
			default:
				break;
		}
	}
    m_choiceMenu = -1;
}
void menuClass::TextMenu()
{
    switch (m_choiceMenu)
    {
        case -1:
            std::cout << "\nTask 1 contains Cpoint and Cfrac, to call it press 1\nTask 2 contains Cperson and Cstudent, to call it press 2\nTask 3 contains Ctimer, Cvector3 and Cstring, to call it press 3\nTask 4 contains Cfrac and Ccomplex, to call it press 4 "<< std::endl;
            break;
        case 0:
            std::cout << "\nThanks for using my program. Good bye." << std::endl;
            break;
        case 1:
            std::cout << "\nTo use Cfrac to call it press 1\nTo use Cpoint it press 2" << std::endl;
            break;
        case 2:
            std::cout << "\nTo use Cstudent to call it press 1\nTo use Cperson it press 2"<< std::endl;
            break;
        case 3:
            std::cout << "\nTo use Cvector to call it press 1\nTo use Ctimer it press 2\nTo use Cstring it press 3" << std::endl;
            break;
        case 4:
            std::cout << "\nTo use Cfrac to call it press 1\nTo use Ccomplex it press 2" << std::endl;
            break;
        default:
            break;
    }

}

