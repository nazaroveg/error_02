// multi_class_main.cpp : 
//

#include "multi_class_Header.h"
#include <iostream>





int main()
{
	setlocale(LC_ALL, "RUS");
	//SetConsoleOutputCP(1251);
	//SetConsoleCP(1251);
	
	
	triangle tr{ 50,60,70,10,20,30 };
	Right_triangle Rt{ 50, 60, 10, 20, 30 };
	Isosceles_triangle It{ 50, 60, 10, 20 };
	Equilateral_triangle Et{ 60,30 };
	Quadrilateral Ql{ 50,60,70,80,10,20,30,40 };
	Parallelogram Pl{ 30, 40, 20, 30 };
	Rectangle Re{ 20,30 };
	Rhombus Rh{ 30,40,30 };
	Square Sq{ 20 };


	tr.print_info();
	Rt.print_info();
	It.print_info();
	Et.print_info();
	Ql.print_info();
	Pl.print_info();
	Re.print_info();  ////#include "windows.h" ошибку выдает.
	Sq.print_info();
	Rh.print_info();

	return 0;

}


