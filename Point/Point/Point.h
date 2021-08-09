//����������� ������ Point
#pragma once
class Point
{
	friend double fDist(const Point &, const Point &);		//����� ��������� ����� �������
private:
	int x, y;
public:
	int GetX()const { return x; }	//inline �� ��������� (�.� ������� � ���� � ������)
	int GetY()const;	//��������� �������� y
	void SetX(int);		//��������� �������� x
	void SetY(int);		//��������� �������� y
	int ReadX(int);


	void Print()const;		//������ �������� x � y �� �����
	void Move(int delta_x, int delta_y);		//��������� �������� x � y

};
inline int Point::GetY()const{return y;}	//��������� �������� y

