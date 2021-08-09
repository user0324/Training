//Определение класса Point
#pragma once
class Point
{
	friend double fDist(const Point &, const Point &);		//поиск растояния между точками
private:
	int x, y;
public:
	int GetX()const { return x; }	//inline по умолчанию (т.к функция и тело в классе)
	int GetY()const;	//установка значения y
	void SetX(int);		//получение значения x
	void SetY(int);		//получение значения y
	int ReadX(int);


	void Print()const;		//печать значений x и y на экран
	void Move(int delta_x, int delta_y);		//изменение значений x и y

};
inline int Point::GetY()const{return y;}	//установка значения y

