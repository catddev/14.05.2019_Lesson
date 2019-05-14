#include "Triangle.h"

Triangle::Triangle():Shape()
{
	a = 0;
}

Triangle::Triangle(double x, double y, double a):Shape(x, y)
{
	this->a = a;
}

double Triangle::area()
{
	return sqrt(3)*a*a / 4;
}

void Triangle::show()
{
	Shape::show();
	cout << a << endl;
}

istream & operator>>(istream & is, Triangle & obj)
{
	is >> obj.center_X >> obj.center_Y >> obj.a;
	return is;
}
