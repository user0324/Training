//Определение класса Point
#pragma once
class Point
{
private:
	int x, y;
public:
	int GetX() { return x; }	//inline по умолчанию (т.к функция и тело в классе)
	int GetY();
	void SetX(int);
	void SetY(int);
	int ReadX(int);
	int ReadY(int);
	void Print();
	void Move(int delta_x, int delta_y); 
};
inline int Point::GetY()
{
	return y;
}

