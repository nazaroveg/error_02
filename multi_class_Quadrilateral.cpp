

#include "multi_class_Quadrilateral.h"


class Quadrilateral; 

	


	void Quadrilateral:: print_info() const
	{
		setlocale(LC_ALL, "RUS");
		Figure::print_info();
		std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << "d=" << Length_d << std::endl;
		std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << " " << "D=" << corner_d << "\n" << std::endl;
	}




	
