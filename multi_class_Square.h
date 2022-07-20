#pragma once
#include "multi_class_Rectangle.h"
#include<string>

class Square : public Rectangle
{
public:
	Square(const int a, std::string name = "Квадрат:") : Rectangle(a, a, name) {}

};