//#include"Shape.h"
#include"rectangle.h"
#include"Circle.h"
#include"Triangle.h"
#include<vector>//������� ����� ������!
#include<fstream>

int main() {

	Shape*sp = new rectangle(1, 5, 10, 12);//��������� ����� ��������� ������������� ������ � ���������, ����� ����� ������ ����� �������, ���� ��� �� virtual
	sp->show();


	vector<Shape*> figures; //������ ���������� �� Shape
	rectangle r1(1, 1, 5, 10);
	rectangle r2(0, 1, 15, 20);
	Circle c1(0, 0, 20);
	Triangle t1(6, 4, 12);

	figures.push_back(&r1);//��������� ����� r1
	figures.push_back(&r2);
	figures.push_back(&c1);
	figures.push_back(&t1);

	for (int i = 0; i < figures.size(); i++)
		figures[i]->show();//����� ������ ��� ��� ������� �������� �������
	// !!! ����� ���������� � ������ ����� ��������� ����������� ������������ ������ ->, � �� "."

	ifstream in_file("in.txt");
	double x, y, a, b;
	string str;
	
	vector<Shape*> figures2;
	Shape *sp2 = new rectangle;
	while (!in_file.eof()) {
		getline(in_file, str, '#');//���������� ������ � �����
		if (str == "Simple rectangle") {
			rectangle *tmpr = new rectangle;
			in_file >> (*tmpr);
			tmpr->setType(str);
			sp2 = tmpr;
			//sp2->show();
		}
		else if (str == "Triangle") {
			Triangle *tmpt=new Triangle;
			in_file >> (*tmpt);
			tmpt->setType(str);
			sp2 = tmpt;
			//sp2->show();
		}
		else if (str == "Circle") {
			Circle *tmpc=new Circle;
			in_file >> (*tmpc);
			tmpc->setType(str);
			sp2 = tmpc;
			//sp2->show();
		}
		figures2.push_back(sp2);
		in_file.get();// to eat "\n"
	}
	cout << endl << endl;
	for (int i = 0; i < figures2.size(); i++)
		figures2[i]->show();

	in_file.close();

	system("pause");
	return 0;
}