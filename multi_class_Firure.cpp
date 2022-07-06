#pragma once
#include "multi_class_Header.h"
#include <string>

class figure;

void figure::print_info() const


{
	setlocale(LC_ALL, "RUS");
	std::cout << name << std::endl;
	std::cout << "число сторон: " << sides_count << std::endl;
}



	

