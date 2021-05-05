/*
------------------------------------------------------------------------------------------
				                       РЕКУРСИЯ
------------------------------------------------------------------------------------------

Рекурсией называется ситуация, когда функция вызывает сама себя непосредственно или через другую функцию
Рекурския нужна для организации циклических действий. То есть есть 2 подхода к решению задачи
1)Рекурсивный - при помощи рекурсивной функции
2)Итерационный - при помощи циклов

Любую задачу можно решить и с тем, и с тем подходом, но некоторые задачи удобнее решать одним из способов
 Так же следует учитывать, что циклы могут быть бесконечно, а рекурсия бесконечной быть не может
 Поскольку для возврата в начало функции не нужны ресурсы, но для вызова функции требуется доп память,а именно Стэк (Стопка)

 STACK -  это модель памяти, из которой последний записанный элемент считывается первым. Стэк это достаточно широкое понятие, например у каждой программы
 есть сегмент кода, сегмент данных, сегмент стэка. Так же есть контейнер стэк, но при вызове функции состояние вызывающей функции сохранчется в стэке
 а так же параметры передаются в функцию через стэк

 Когда мы пишем цикл, мы в первую очередь думаем об условии выхода из цикла.
 Когда мы пишем рекурсивную функцию, мы в первую очередь должны подумать об условии выхода из рекурсии, а во вторую о рекурсивном вызове

*/
#include <iostream>
#include <conio.h>

using namespace std;
//#define INT1
//#define INT2
//#define FACTORIAL
//#define STEPEN

void elevator(int floor);
int factorial(int n);
double power(double n, int step);


#ifdef INT1
int main()
{
	setlocale(LC_ALL, "ru");
	
	//Ctrl+K+S   Запихивает в структуру/цикл
	while (true)
	{
		cout << "Hello World!\n";
	}

}
#endif //INT1
#ifdef INT2
int main()
{
	setlocale(LC_ALL, "ru");
	system("cls");
	cout << "Hello World!\n";

	int floor;
	cout << "На каком вы этаже" << endl;  cin >> floor;
	elevator(floor);
	cout << "Еще разочек? (y/n)";
	if (_getch() == 'y')
	{
		main();
	}
	// _getch() - ожидает нажатие клавиши = и возваращает ASCII-код нажатой клавиши 

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "\nпривет подвал!\n\n";
		return;
	}
	static int counter = 0;
	cout << "Мы на " << floor << " этаже" << "\t";
	cout << counter++ << endl;
	elevator(floor-1);
	cout << counter++ << endl;
	cout << "Мы на " << floor << " этаже" << "\t";

}
}
#endif // INT2
#ifdef FACTORIAL
int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите число\n";
	int n = 0; cin >> n;
	cout << factorial(n);

}
#endif // FACTORIAL
#ifdef FACTORIAL
int factorial(int n)
{
	if (n == 0) return 1;

	int f = n * factorial(n - 1);
	return f;
}
#endif //FACTORIAL
#ifdef STEPEN
int main()
{
	cout << "Vvedite n i step\n";
	int n = 0; cin >> n;
	int step = 0; cin >> step;
	cout << power(n, step);
}

double power(double n, int step)
{
	return step == 0 ? 1 : step < 0 ? 1 / n * power(n, step + 1) : n * power(n, step - 1);
}
#endif // STEPEN

int main()
{

}