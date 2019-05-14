#pragma once
#include"Shape.h"

class Triangle :public Shape {
private:
	double a;
public:
	Triangle();
	Triangle(double x, double y, double a);

	double area();
	void show();

	friend istream& operator>>(istream& is, Triangle& obj);
};