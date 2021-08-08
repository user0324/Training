//����������� ������ Point
#pragma once
class Point
{
private:
	int x;
	int y;
public:
	int GetX() { return x; }	//inline �� ��������� (�.� ������� � ���� � ������)
	int GetY();
	void SetX(int);
	void SetY(int);

	void Print();
	void Move(int delta_x, int delta_y); 
};
inline int Point::GetY()
{
	return y;
}

