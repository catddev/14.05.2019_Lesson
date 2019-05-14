#pragma once
#include"Shape.h"

class rectangle: public Shape {
private:
	double a;
	double b;
public:
	rectangle();
	rectangle(double x, double y, double a, double b);
	void setA(double a);
	void setB(double b);
	//void operator()(rectangle &obj);

	double area();//полиморфмизм работает только тогда, когда названия методов дочернего и родительского класса абсолютно идентичны
	void show();

	friend istream& operator>>(istream& is, rectangle& obj);
};