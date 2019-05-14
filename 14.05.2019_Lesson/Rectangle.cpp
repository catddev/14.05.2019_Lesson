#include "rectangle.h"

rectangle::rectangle() :Shape()//or Shape(0, 0), shape constructor 
{
	a = 0;
	b = 0;
}

rectangle::rectangle(double x, double y, double a, double b):Shape(x,y)//вызов конструктора родительского класса
{
	this->a = a;
	this->b = b;
}

void rectangle::setA(double a)
{
	this->a = a;
}

void rectangle::setB(double b)
{
	this->b = b;
}

double rectangle::area()
{
	return a * b;
}

void rectangle::show()
{
	Shape::show();
	std::cout << a << " " << b << std::endl;//std:: если не указывать сверху namespace std
}

istream & operator>>(istream & is, rectangle & obj)
{
	is >> obj.center_X >> obj.center_Y >> obj.a >> obj.b;
	return is;
}
