#pragma once
#include "multi_class_Firure.h"


class Quadrilateral : public figure
{
public:
	Quadrilateral(const int A, int B, int C, int D, int a, int b, int c, int d, std::string name = "Четырёхугольник") :
		figure(4, name), corner_a(A), corner_b(B), corner_c(C), corner_d(D),
		Length_a(a), Length_b(b), Length_c(c), Length_d(d) {}
	void print_info() const;

protected:
	int corner_a = 0, corner_b = 0, corner_c = 0, corner_d = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0, Length_d = 0;
};