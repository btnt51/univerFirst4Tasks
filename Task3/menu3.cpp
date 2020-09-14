//
// Created by btnt51 on 14.09.2020.
//
#include "../Task2/Cperson.h"
#include "Ctimer.h"
#include "Cvector.h"
#include "Cstring.h"

void menu3()
{
	Cperson person("Alina", 2001);
	Ctimer testMin(5,60);
	Ctimer testSec(60);
	Cstring str1;
	//str1 = "Hello world";
	//str1.output();
	Cstring str2("hi");
	str2 += " new world";
	str2.output();
}
