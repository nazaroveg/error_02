#include "multi_class_Header.h"
#include <string>

class figure;


//figure(int _sides_count = 0, std::string _name = "Фигура") : sides_count(_sides_count), name(_name) { };


	void figure :: print_info() const
	{

		std::cout << name << std::endl;
		std::cout << "число сторон: " << sides_count << std::endl;

	}


	

