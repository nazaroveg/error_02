#pragma once

#include "multi_class_Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	Rectangle(const int a, int b, std::string name = "Прямоугольник:") :Parallelogram(90, 90, a, b, name) { }

};

