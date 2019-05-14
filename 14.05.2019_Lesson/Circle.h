#pragma once
#include"Shape.h"

class Circle :public Shape {
private:
	double R;
public:
	Circle();
	Circle(double x, double y, double R);

	double area();
	void show();

	friend istream& operator>>(istream& is, Circle& obj);
};