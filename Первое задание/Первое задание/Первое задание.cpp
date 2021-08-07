// Первое занятие структуры
#include <iostream>
#include <iomanip>
using namespace std;
struct time
{
	int chas; // часы
	int min; //минуты
	int sec; // секунды
}tit[12];
struct data
{
	int d; // тип данных представляет целое число
}dat[9];
void set(int q) // функция рамдомного задания компонетнов q-количество компонентов
{
	srand(time(0));
	for (int i = 0; i < q; i++)
	{
		tit[i].chas = rand() % 23;
		tit[i].min = rand() % 60;
		tit[i].sec = rand() % 60;
	}
}
void print(int q) //функция вывода содержимого структуры
{
	for (int i = 0; i < q; i++)
	{
		cout << "\n" << tit[i].chas << ":";
		cout << tit[i].min << ":";
		cout << tit[i].sec << ".";
	}
}
int check(int q) // функция проверки значения
{
	while (true)
	{
		cout << "specify the components: time" << endl;
		cin >> q;
		if (cin.fail())
		{
			cout << "enter a number" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (q <= 0)
		{
			cout << " Enter a value greater than zero" << endl;
			continue;
		}
		if (q > 13)
		{
			cout << " range of values <1-13>" << endl;
			continue;
		}
		else break;
	}
	return q;
}
int hour(int q)// проверрки ввода часа
{
	while (true)
	{
		cout << "ENTER" << endl;
		cin >> q;
		if (cin.fail())
		{
			cout << "enter a number" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (q < 0)
		{
			cout << "Enter a positive value" << endl;
			continue;
		}
		if (q > 23)
		{
			cout << " range of values <0-23>" << endl;
			continue;
		}
		else break;
	}
	return q;
}
int minutes(int q) //проверки минут и сек
{
	while (true)
	{
		cout << "ENTER" << endl;
		cin >> q;
		if (cin.fail())
		{
			cout << "enter a number" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (q < 0)
		{
			cout << "Enter a positive value" << endl;
			continue;
		}
		if (q > 60)
		{
			cout << " range of values <0-60>" << endl;
			continue;
		}
		else break;
	}
	return q;
}
int read(int q) //ввод значений с клавиатуры
{
	cout << "\n enter number of components <time> required for input." << endl;
	int en = check(q);
	for (int i = 0; i < en; i++)
	{
		cout << " enter hour." << endl;
		int ho = hour(q);
		tit[i].chas = ho;
		cout << "enter minutes." << endl;
		int mi = minutes(q);
		tit[i].min = mi;
		cout << "enter seconds." << endl;
		int se = minutes(q);
		tit[i].sec = se;
	}
	return en;
}
void setd(int q) // рандомное задание компонетов data
{
	srand(time(0));
	for (int i = 0; i < q; i++)
	{
		dat[i].d = rand() % (21474674) - 21474;
	}
}
int checkd(int q) // функция проверки значения data
{
	while (true)
	{
		cout << "specify the components: data" << endl;
		cin >> q;
		if (cin.fail())
		{
			cout << "enter a number" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		if (q <= 0)
		{
			cout << " Enter a value greater than zero" << endl;
			continue;
		}
		if (q > 10)
		{
			cout << " range of values <1-10>" << endl;
			continue;
		}
		else break;
	}
	return q;
}
void printd(int q)
{
	cout << endl;
	for (int i = 0; i < q; i++)
	{
		cout << dat[i].d << " ";
	}
}
int readd(int q)
{

}
int main()
{
	cout << "Enter shet\n";
	int q = 0;
	int ru = check(q);
	set(ru);
	print(ru);
	int w = read(q);
	print(w);
	cout << "\nDATA TYPE" << endl;
	int na = checkd(q);
	setd(na);
	printd(na);
	return 0;
}