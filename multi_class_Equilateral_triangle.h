#pragma once
#include "multi_class_triangle.h"

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(const int A, int a) : Triangle(A, A, A, a, a, a, "Равносторонний треугольник") {  }
};