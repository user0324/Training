//Реализация класса Point
#include<iostream>
#include"Point.h"
using namespace std;

void Point::SetX(int _x)
{
	x = _x >= 0 ? _x : 0;
}
void Point::SetY(int _y)
{
	y = _y >= 0 ? _y : 0;
}
void Point::Print()
{
	cout << "(" << x << ", " << y << ")";
}
void Point::Move(int dx, int dy)
{
	SetX(x + dx);
	SetY(y + dy);
}