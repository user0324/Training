//Реализация класса Point
#include<iostream>
#include<cmath>
#include"Point.h"
using namespace std;
void Point::SetX(int x)
{
	this->x = x >= 0 ? x : 0;
}
void Point::SetY(int _y)
{
	y = _y >= 0 ? _y : 0;
}
void Point::Print()const
{
	cout << "(" << x << ", " << y << ")";
}
void Point::Move(int dx, int dy)
{
	SetX(x + dx);
	SetY(y + dy);
}
double fDist(const Point &a, const Point &b)
{
	return sqrt(pow(static_cast <double>(a.x - b.x), 2) + pow(static_cast <double>(a.y - b.y), 2));
}
/* int Point::ReadX(int _x)
{

}
int Point::ReadY(int _y)
{

}*/