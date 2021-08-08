//»спользование класса Point (клинтский код , клиет класса)
#include<iostream>
#include"Point.h"
using namespace std;

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