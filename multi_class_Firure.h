#pragma once
#include <string>
#include <iostream>


class  figure
{

public:
	figure(int _sides_count = 0, std::string _name = "Фигура") : sides_count(_sides_count), name(_name) { };
	void print_info() const;


protected:
	std::string name;
	int sides_count;
};