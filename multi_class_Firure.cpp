
#include "multi_class_Firure.h"


Figure::Figure (const int _sides_count = 0, std::string _name = "Фигура") : sides_count(_sides_count), name(_name) { };

void  Figure::print_info() const

{

	std::cout << name << std::endl;
	std::cout << "число сторон: " << sides_count << std::endl;

}




	

