#pragma once
#include <string>
#include <iostream>


class  Figure
{

public:
	
    Figure(int sides_count, std::string name);

	virtual void print_info() const;


protected:
	std::string name {};
	int sides_count = 0;
};