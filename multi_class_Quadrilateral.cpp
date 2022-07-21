

#include "multi_class_Quadrilateral.h"




	


	void Quadrilateral:: print_info() const
	{
		setlocale(LC_ALL, "RUS");
		std::cout << name << std::endl;
		std::cout << "число сторон: " << sides_count << std::endl;
		std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << "d=" << Length_d << std::endl;
		std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << " " << "D=" << corner_d << "\n" << std::endl;
	}




	
