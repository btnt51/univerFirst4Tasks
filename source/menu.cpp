//
// Created by btnt51 on 10.09.2020.
//
#include "../headers/includes.h"

void menu()
{
	while(true)
	{
		std::cout << "\nHello in my second program!" << std::endl;
		std::cout << "Enter a number from 1 to 4 of task that you want to execute or write 0 to exit"
			   " from program " << std::endl;
		char const * str = "You put a wrong number, reenter a number of task from 1 to 4 or 0 to exit.";
		int select = 0;
		select = inputData(select, str);
		if (select < 0 || select > 4)
		{
			std::cout << "You put a wrong number, reenter a number of task from 1 to 4 or 0 to exit." << std::endl;
			select = inputData(select, str);
		}
		switch (select)
		{
			case 0:
				exit(0);
			case 1:
				menu1();
				break;
			case 2:
				menu2();
				break;
			case 3:
				menu3();
				break;
			case 4:
				menu4();
				break;
			default:
				break;
		}

	}
}