#pragma once
#include <exception>
#include <string>
#include <iostream>
class class_error 
{
public:
	class_error(const std::string what);
	std::string what();
//private:
	std::string whado;

};

