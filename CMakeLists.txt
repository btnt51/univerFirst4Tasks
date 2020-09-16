cmake_minimum_required(VERSION 3.16)
project(univerFirst4Tasks)

set(CMAKE_CXX_STANDARD 20)

add_executable(univerFirst4Tasks source/main.cpp headers/includes.h Task1/Cpoint.cpp Task1/Cpoint.h Task1/Cfrac.cpp Task1/Cfrac.h Task1/menu1.cpp source/menu.cpp headers/prototypes.h source/input_data.cpp Task2/Cperson.cpp Task2/Cperson.h Task2/Cstudent.cpp Task2/Cstudent.h Task2/menu2.cpp Task3/Ctimer.cpp Task3/Ctimer.h Task3/Cstring.cpp Task3/Cstring.h Task3/Cvector.cpp Task3/Cvector.h Task3/menu3.cpp Task4/Ccomplex.cpp Task4/Ccomplex.h Task4/menu4.cpp)