#pragma once
#include "multi_class_triangle.h"

class Right_triangle : public triangle
{
public:
	Right_triangle(const int A, int B, int a, int b, int c) : triangle(A, B, 90, a, b, c, "Прямоугольный треугольник") { }

};