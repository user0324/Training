//–еализаци€ класса Point
#include<iostream>
#include<cmath>
#include"Point.h"
using namespace std;
void Point::SetX(int x)		//получение значени€ x
{
	this->x = x >= 0 ? x : 0;
}
void Point::SetY(int _y)	//получение значени€ y
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
double fDist(const Point &a, const Point &b)	//поиск расто€ни€ между точками 
{
	return sqrt(pow(static_cast <double>(a.x - b.x), 2) + pow(static_cast <double>(a.y - b.y), 2));
}
/* int Point::ReadX(int _x)
{

}*/