#include "../headers/includes.h"
int zero_checker(int someNum)
{
	try
	{
		if (someNum == 0)
			throw 0;
	}
	catch(int a)
	{
		std::cout << "cannot be multiplied or divided by zero" << std::endl;
		return 0;
	}
	return 1;
}