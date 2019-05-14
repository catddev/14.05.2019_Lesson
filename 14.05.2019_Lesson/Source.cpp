//#include"Shape.h"
#include"rectangle.h"
#include"Circle.h"
#include"Triangle.h"
#include<vector>//готовый класс вектор!
#include<fstream>

int main() {

	Shape*sp = new rectangle(1, 5, 10, 12);//обращаясь через указатель родительского класса к дочернему, будут видны только общие функции, если они не virtual
	sp->show();


	vector<Shape*> figures; //вектор указателей на Shape
	rectangle r1(1, 1, 5, 10);
	rectangle r2(0, 1, 15, 20);
	Circle c1(0, 0, 20);
	Triangle t1(6, 4, 12);

	figures.push_back(&r1);//добавляем АДРЕС r1
	figures.push_back(&r2);
	figures.push_back(&c1);
	figures.push_back(&t1);

	for (int i = 0; i < figures.size(); i++)
		figures[i]->show();//вызов метода шоу для каждого элемента вектора
	// !!! когда обращаемся к методу через указатель обязательно использовать ссылку ->, а не "."

	ifstream in_file("in.txt");
	string str;
	
	vector<Shape*> figures2;
	Shape *sp2;
	while (!in_file.eof()) {
		getline(in_file, str, '#');//считывание строки с файла
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