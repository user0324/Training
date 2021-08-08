//»спользование класса Point (клинтский код , клиет класса)
#include<iostream>
#include<cmath>
#include"Point.h"
using namespace std;

double gDist(const Point &a, const Point &b)	// чтобы работало быстрей и эффективней использую ссылку (не копируетс€)
// const уверение что обект не мен€етс€ (повышает эффективность)
{
	return sqrt(pow(static_cast <double>(a.GetX() - b.GetX()), 2) + pow(static_cast <double>(a.GetY() - b.GetY()), 2));
}

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

	p->Move(-20, 0);
	p->Print(); cout << endl;

	cout << "Distance from "; a.Print();
	cout << " and "; p->Print();
	cout << " = " << gDist(a, *p) << endl;


	cout << "Distance from "; a.Print();
	cout << " and "; p->Print();
	cout << " = " << fDist(a, *p) << endl;

	delete p; // Ќ≈Ћ№«я «јЅџ¬ј“№ !!
}