

#include "multi_class_triangle.h"

 

Triangle::Triangle(const int A, int B, int C, int a, int b, int c, std::string name):
	Figure(3, name), corner_a(A), corner_b(B), corner_c(C), Length_a(a), Length_b(b), Length_c(c) 
{
	
	if (sides_count != 3)
	{
		
		std::cout << " " << name << std::endl;
		throw class_error("Неверное число сторон");
		
	}
	
	if (corner_a + corner_b + corner_c != 180)
	{
		std::cout << " " << name << std::endl;
		throw class_error("Сумма углов не равна 180");

		
	}
}





void Triangle::print_info() const
	{
	
		
	    Figure:: print_info(); 
		std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << std::endl;
		std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c  << std::endl;
	}

bool Triangle::ckeck() const
{
	return sides_count == (3 && (corner_a + corner_b + corner_c == 180));
}





	

