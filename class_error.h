#pragma once
#include <exception>
#include <string>
#include <iostream>
class class_error :public std::exception
{
public:
	class_error(const std::string & what);

private:
	std::string err;
};

