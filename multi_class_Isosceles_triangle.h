#pragma once
#include "multi_class_triangle.h"


class Isosceles_triangle : public triangle
{
public:
	Isosceles_triangle(const int A, int B, int a, int b) : triangle(A, B, A, a, b, a, "Равнобедренный треугольник") {}
};