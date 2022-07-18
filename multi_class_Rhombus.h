#pragma once
#include "multi_class_Parallelogram.h"


class Rhombus : public Parallelogram
{
public:
	Rhombus(const int A, int B, int a) : Parallelogram(A, B, a, a, "Ромб:") {}
};