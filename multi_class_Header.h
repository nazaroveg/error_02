#pragma once
//#include <iostream>
#include <string>




class figure
{
	
public:
	figure(int _sides_count = 0, std::string _name = "Фигура") : sides_count(_sides_count), name(_name) { };
	void print_info() const;
	

protected:
	std::string name ;
	int sides_count ;
};








class triangle : public figure
{
	
public:
	triangle(const int A, int B, int C, int a, int b, int c, std::string name = "Треугольник") : figure(3, name), corner_a(A), corner_b(B), corner_c(C), Length_a(a), Length_b(b), Length_c(c) {}
	void print_info() const;
protected:
	int corner_a = 0, corner_b = 0, corner_c = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0;
};







class Right_triangle : public triangle
{
	public:
	Right_triangle(const int A, int B, int a, int b, int c) : triangle(A, B, 90, a, b, c, "Прямоугольный треугольник") { }

};







class Isosceles_triangle : public triangle
{
public:
	Isosceles_triangle(const int A, int B, int a, int b) : triangle(A, B, A, a, b, a, "Равнобедренный треугольник") {}
};








class Equilateral_triangle : public triangle
{
public:
	Equilateral_triangle(const int A, int a) : triangle(A, A, A, a, a, a, "Равносторонний треугольник") {  }
};






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





class Parallelogram : public Quadrilateral
{
public:

	Parallelogram(const int A, int B, int a, int b, std::string name = "Параллелограмм:") : Quadrilateral(A, B, A, B, a, b, a, b, name) {}
};






class Rectangle : public Parallelogram
{
public:
	Rectangle(const int a, int b, std::string name = "Прямоугольник:") :Parallelogram(90, 90, a, b, name) { }

};




class Rhombus : public Parallelogram
{
public:
	Rhombus(const int A, int B, int a) : Parallelogram(A, B, a, a, "Ромб:") {}
};




class Square : public Rectangle
{
public:
	Square(const int a, std::string name = "Квадрат:") : Rectangle(a, a, name) {}

};
