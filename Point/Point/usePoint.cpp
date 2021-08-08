//»спользование класса Point (клинтский код , клиет класса)
#include<iostream>
#include"Point.h"
using namespace std;

int main()
{
	Point a;		//создание объекта в стеке
	a.SetX(10);
	a.SetY(20);
	cout << a.GetX() << ", " << a.GetY() << endl;
	a.Print(); cout << endl;

	a.Move(5, 10);
	a.Print(); cout << endl;

	Point *p = new Point;	//создание объекта в куче (в динамической пам€ти)
	// здесь д.б ќбработка ошибок при выделение пам€ти!!
	p->SetX(65);
	p->SetY(70);
	p->Print(); cout << endl;

	delete p; // Ќ≈Ћ№«я «јЅџ¬ј“№ !!
}