//����������� ������ Point
#pragma once
class Point
{
	friend double fDist(const Point &, const Point &);
private:
	int x, y;
public:
	int GetX()const { return x; }	//inline �� ��������� (�.� ������� � ���� � ������)
	int GetY()const;
	void SetX(int);
	void SetY(int);
	int ReadX(int);
	int ReadY(int);
	void Print()const;
	void Move(int delta_x, int delta_y); 

};
inline int Point::GetY()const
{
	return y;
}

