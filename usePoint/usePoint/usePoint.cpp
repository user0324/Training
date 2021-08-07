// usePoint.cpp 
// Использование класса Point (клиентский код)
#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	int GetX() { return x; } //inline по умолчанию
	int GetY();
	void SetX(int);
	void SetY(int);

	void Print();
	void Move(int delta_x, int delta_y);
};
inline int Point::GetY() { return y; }
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
	cout <<"("<< x << ", " << y <<")";
}
void Point::Move(int dx, int dy)
{
	SetX(x + dx);
	SetY(y + dy);
}
int main()
{
	 Point a;
	a.SetX(10);
	a.SetY(20);
	cout << a.GetX() << ", " << a.GetY() << endl;
	a.Print(); cout << endl;

	a.Move(5, 10);
	a.Print(); cout << endl;
}

