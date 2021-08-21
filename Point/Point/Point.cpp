//Реализация класса Point
#include<iostream>
#include<cmath>
#include<string>
#include"Point.h"
using namespace std;
void Point::SetX(int x)		//получение значения x
{
	this->x = x >= 0 ? x : 0;
}
void Point::SetY(int _y)	//получение значения y
{
	y = _y >= 0 ? _y : 0;
}
void Point::Print()const	//печать значений x и y на экран
{
	cout << "(" << x << ", " << y << ")";
}
void Point::Move(int dx, int dy)	//изменение значений x и y
{
	SetX(x + dx);
	SetY(y + dy);
}
double fDist(const Point &a, const Point &b)	//поиск растояния между точками 
{
	return sqrt(pow(static_cast <double>(a.x - b.x), 2) + pow(static_cast <double>(a.y - b.y), 2));
}
double Point::Dist(const Point &b)const	//поиск растояния между точками 
{
	return sqrt(pow(static_cast <double>(x - b.x), 2) + pow(static_cast <double>(y - b.y), 2));
}
Point::Point() // конструктор инициализации полей
{
	x = y = 0;
	// для отладки проверка конструктора. Специальный метод класса
	cout << "Point():";
	Print();
	cout << endl;
}
Point::~Point() // диструктор инициализации полей
{
	// для отладки проверка диструктора. Специальный метод класса
	cout << "~Point():";
	Print();
	cout << endl;
}
Point::Point(const Point &other) //конструктор копирования (поле в поле)
{
	x = other.x;
	y = other.y;
	// для отладки
	cout << "~Point(const Point&):";
	Print();
	cout << endl;
}
int Check(int q) // функция проверки значения введённых координат
{
	while (true)
	{
		cout << "Set the value" << endl;
		cin >> q;
		if (cin.fail())
		{
			cout << "enter a number" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (q < -99 || q > 99)
		{
			cout << " range of values <-99 99 >" << endl;
			continue;
		}
		else break;
	}
	return q;
}

/*string ReadX() //вввод данных с клавиатуры
{
	cout << " enter a variable name" << endl;
	string a;
	cin >> a;
	a.resize(5);
	Point a;
	cout << a;
	return a;
}*/