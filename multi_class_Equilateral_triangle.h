#pragma once
#include "multi_class_triangle.h"

class Equilateral_triangle : public triangle
{
public:
	Equilateral_triangle(const int A, int a) : triangle(A, A, A, a, a, a, "Равносторонний треугольник") {  }
};