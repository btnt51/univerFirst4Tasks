//
// Created by btnt51 on 10.09.2020.
//
#include "../headers/includes.h"

void menu()
{
	while(true)
	{
		std::cout << "Hello in my second program!" << std::endl;
		std::cout << "Enter a number from 1 to 4 of task that you want to execute or write 0 to exit"
			   "from program " << std::endl;
		int select = 0;
		std::cin >> select;
		if (select < 0 || select > 4)
		{
			std::cout << "You put a wrong data, reenter a number of task from 1 to 4 or 0 to exit." << std::endl;
			std::cin >> select;
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