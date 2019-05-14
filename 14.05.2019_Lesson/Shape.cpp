#include "Shape.h"

Shape::Shape()
{
	center_X = 0;
	center_Y = 0;
	type = "";
}

Shape::Shape(double x, double y)
{
	center_X = x;
	center_Y = y;
	type = "";
}

void Shape::setX(double x)
{
	center_X = x;
}

void Shape::setY(double y)
{
	center_Y = y;
}

void Shape::setType(string type)
{
	this->type = type;
}

string Shape::getType()
{
	return type;
}

double Shape::area()
{
	return 0.0;
}

void Shape::show()
{
	cout << type << endl;
	cout << center_X << " " << center_Y << endl;
}
