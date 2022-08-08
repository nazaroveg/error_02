// multi_class_main.cpp : 
//


#include "multi_class_Firure.h"
#include "multi_class_triangle.h"
#include "multi_class_Equilateral_triangle.h"
#include "multi_class_Isosceles_triangle.h"
#include "multi_class_Parallelogram.h"
#include "multi_class_Quadrilateral.h"
#include "multi_class_Rectangle.h"
#include "multi_class_Rhombus.h"
#include "multi_class_Right_triangle.h"
#include "multi_class_Square.h"


void print_created()
{
	std::cout << "создан" << "\n\n" << std::endl;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	
	try
	{
		Triangle tr{ 50,60,70,10,20,30, "Треугольник" };
		tr.print_info();
		print_created();
	}
	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;
		
	}
	try
	{
		Right_triangle Rt{ 45, 45, 10, 20, 30 };
		Rt.print_info();
		print_created();
	}
	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;
	}
	try
	{
		Isosceles_triangle It{ 50, 60, 10, 20 };
		It.print_info();
		print_created();
	}
	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;
	}
	try
	{
		Equilateral_triangle Et{ 60,30 };
		Et.print_info();
		print_created();
	}

	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;
	}
	try
	{
		Quadrilateral Ql{ 50,60,70,80,10,20,30,40, "Четырёхугольник" };
		Ql.print_info();
		print_created();

	}
	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;
	}
	try
	{
		Parallelogram Pl{ 30, 40, 20, 30, "Параллелограмм:" };
		Pl.print_info();
		print_created();
	}
	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;
	}
	try
	{
		Rectangle Re{ 20,30, "Прямоугольник:" };
		Re.print_info();
		print_created();
	}
	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;
	}
	try
	{
		Rhombus Rh{ 30,40,30, "Ромб:" };
		Rh.print_info();
		print_created();
	}
	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;
	}
	try
	{
		Square Sq{ 20, "Квадрат:" };
		Sq.print_info();
		print_created();
	}
	catch (const class_error& A)
	{
		std::cout << A.what() << " не создан " << std::endl;

	}


	
	return 0;

}


