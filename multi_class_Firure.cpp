#pragma once
#include "multi_class_Header.h"
#include <string>

class figure;

void figure::print_info() const

{
	std::cout << name << std::endl;
	std::cout << "����� ������: " << sides_count << std::endl;
}



	
