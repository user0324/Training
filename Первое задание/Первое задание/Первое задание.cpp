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
	data *next; // адресная часть на следующий элемент
}dat[9];
void set(int q) // функция рамдомного задания компонетнов q-количество компонентов
{
	srand((0));
	for (int i = 0; i < q; i++)
	{
		tit[i].chas = rand() % 23;
		tit[i].min = rand() % 60;
		tit[i].sec = rand() % 60;
	}
}
void print(int q,const char *delim) //функция вывода содержимого структуры
{
	for (int i = 0; i < q; i++)
	{
		cout << "\n" << tit[i].chas << delim;
		cout << tit[i].min << delim;
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
	cout << "\n enter number of components <Time> required for input." << endl;
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
	srand((0));
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
void printd(int q, const char *delim)
{
	cout << endl;
	while(q--)
	{
		cout << dat[q].d << delim;
	}
}
void read() // ввод значения с клавиатуры для data
{
	struct data *xz = NULL;
	struct data *zx;
	zx = xz;
	cout << "\n Enter the value of the item" << endl;
	while (true)
	{
		int a;
		cout << " Keep typing items" << endl;
		cin >> a;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			break;
		}
		if (a > 999 || a < -999)
		{
			cout << "Possible values <-999 до 999> " << endl;
			continue;
		}
		if (xz == NULL)
		{
			xz = new struct data;
			xz->d = a;
			xz->next = NULL;
			zx = xz;
		}
		else
		{
			zx->next = new struct data;
			zx->next->d = a;
			zx->next->next = NULL; // Элемент после него пустой 
			zx = zx->next; // Теперь этот эл-т является последним
		}
	}
	if (xz == NULL)
	{
		cout << "no elements" << endl;
		return;
	}
	while (xz)
	{
		cout << xz->d << " ";
		xz = xz->next;
	}
	cout << endl;
}
int main()
{
	cout << "Enter shet\n";
	int q = 0;
	int ru = check(q);
	set(ru);
	print(ru, ":");
	int w = read(q);
	print(w, ";");
	cout << "\nDATA TYPE" << endl;
	int na = checkd(q);
	setd(na);
	printd(na, " ");
	read();
	return 0;
}