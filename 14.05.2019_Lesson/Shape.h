#pragma once
#include<iostream>
#include<string>
using namespace std;

class Shape {
protected:
	double center_X;
	double center_Y;
	string type;

public:
	Shape();
	Shape(double x, double y);

	void setX(double x);
	void setY(double y);

	void setType(string type);
	string getType();

	//virtual используется для ДИНАМИЧЕСКОЙ ПРИВЯЗКИ, составляет таблицу сопоставлений и будет вызывать нужную версию для дочернего класса
	virtual double area();//every shape's area counts differently
	virtual void show();
};