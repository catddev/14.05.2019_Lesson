#include "Circle.h"

Circle::Circle():Shape()
{
	R = 0;
}

Circle::Circle(double x, double y, double R):Shape(x, y)
{
	this->R = R;
}

double Circle::area()
{
	return 3.14*R*R;
}

void Circle::show()
{
	Shape::show();
	cout << R << endl;
}

istream & operator>>(istream & is, Circle & obj)
{
	is >> obj.center_X >> obj.center_Y >> obj.R;
	return is;
}
