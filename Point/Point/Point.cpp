//���������� ������ Point
#include<iostream>
#include<cmath>
#include<string>
#include"Point.h"
using namespace std;
void Point::SetX(int x)		//��������� �������� x
{
	this->x = x >= 0 ? x : 0;
}
void Point::SetY(int _y)	//��������� �������� y
{
	y = _y >= 0 ? _y : 0;
}
void Point::Print()const	//������ �������� x � y �� �����
{
	cout << "(" << x << ", " << y << ")";
}
void Point::Move(int dx, int dy)	//��������� �������� x � y
{
	SetX(x + dx);
	SetY(y + dy);
}
double fDist(const Point &a, const Point &b)	//����� ��������� ����� ������� 
{
	return sqrt(pow(static_cast <double>(a.x - b.x), 2) + pow(static_cast <double>(a.y - b.y), 2));
}
double Point::Dist(const Point &b)const	//����� ��������� ����� ������� 
{
	return sqrt(pow(static_cast <double>(x - b.x), 2) + pow(static_cast <double>(y - b.y), 2));
}
Point::Point() // ����������� ������������� �����
{
	x = y = 0;
	// ��� ������� �������� ������������. ����������� ����� ������
	cout << "Point():";
	Print();
	cout << endl;
}
Point::~Point() // ���������� ������������� �����
{
	// ��� ������� �������� �����������. ����������� ����� ������
	cout << "~Point():";
	Print();
	cout << endl;
}
Point::Point(const Point &other) //����������� ����������� (���� � ����)
{
	x = other.x;
	y = other.y;
	// ��� �������
	cout << "~Point(const Point&):";
	Print();
	cout << endl;
}
int Check(int q) // ������� �������� �������� �������� ���������
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

/*string ReadX() //����� ������ � ����������
{
	cout << " enter a variable name" << endl;
	string a;
	cin >> a;
	a.resize(5);
	Point a;
	cout << a;
	return a;
}*/