//������������� ������ Point (��������� ��� , ����� ������)
#include<iostream>
#include"Point.h"
using namespace std;

int main()
{
	Point a;		//�������� ������� � �����
	a.SetX(10);
	a.SetY(20);
	cout << a.GetX() << ", " << a.GetY() << endl;
	a.Print(); cout << endl;

	a.Move(5, 10);
	a.Print(); cout << endl;

	Point *p = new Point;	//�������� ������� � ���� (� ������������ ������)
	// ����� �.� ��������� ������ ��� ��������� ������!!
	p->SetX(65);
	p->SetY(70);
	p->Print(); cout << endl;

	delete p; // ������ �������� !!
}