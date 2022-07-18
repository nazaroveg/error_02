#pragma once
#include "multi_class_Firure.h"
#include <string>
#include <iostream>


class triangle : public figure
{

public:
	triangle(const int A, int B, int C, int a, int b, int c, std::string name = "Треугольник") : figure(3, name), corner_a(A), corner_b(B), corner_c(C), Length_a(a), Length_b(b), Length_c(c) {}
	void print_info() const;
protected:
	int corner_a = 0, corner_b = 0, corner_c = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0;
};
