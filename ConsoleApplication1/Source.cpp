#include <stdio.h>
#include<locale.h>
#include <iostream>
#include<stdint.h>
#include<math.h>

using namespace std;

char u;
void main()
{
	setlocale(LC_ALL, "Russian");

start:

	int a;
	cout << "введите номер задания:";
	cin >> a;
	switch (a)
	{

		//1.	Напишите функцию int f(int h, int m, int s), которая принимает три
				//целых аргумента (часы h, минуты m и секунды s) и возвращает количество секунд,
				//прошедших с начала дня.

	case 1: {
		int h, m, s, t;
		int i = 0;
		cout << "введите пункт(1-3):";
		cin >> i;
		if (i == 1)
		{
			cout << "введите кол-во часов:";
			cin >> h;
			t = h * 360; 
				cout << "Количество секунд:" << t << endl;
		}
		else if (i == 2)
		{
			cout << "Введите кол-во минут:";
			cin >> m;
			t = m * 60;
			cout << "Количество секунд:" << t << endl;
		}
		else if (i == 3)
		{
			cout << "введите кол-во секунд:";
			cin >> s;
			t = s;
			cout << "Количество секунд:" << t << endl;
		}

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//2.	Напишите функцию int f(int m, int d), которая принимает два целых
		//аргумента (месяц m и день d) и возвращает количество дней, прошедших
		//с начала года. Считаем, что в каждом месяце 30 дней.

	case 2: {
		int m, dn, K;
		cout << "введите месяц (1-12):";
		cin >> m;
		cout << "введите день (1-30):";
		cin >> dn;
		K = dn + ((m - 1) * 30);
		cout << "Количество дней с начала года:" << K << endl;

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//3.	Напишите функцию int f(int m, int d), которая принимает два 
		//целых аргумента (месяц m и день d) и возвращает количество дней,
		//прошедших с начала года. Считаем, что в каждом месяце 30 или 31дней, 
		//а год не високосный.??????

	case 3: {
		int m, dn, K, kd, kd1, kd2;

		cout << "введите месяц (1-12):";
		cin >> m;
		cout << "введите день (1-30):";
		cin >> dn;
		switch (m)
		{
		case 1:
			K = dn;
		case 2:
		{K = 31 + dn;
		cout << "кол-во дней:" << K << endl; }break;
		case 3:
		{K = 31 + 28 + dn;
		cout << "кол-во дней:" << K << endl;
		}break;
		case 4:
		{K = (31 * 2) + 28 + dn;
		cout << "кол-во дней:" << K << endl; }break;
		case 5:
		{K = (2 * 31) + 28 + 30 + dn;
		cout << "кол-во дней:" << K << endl;
		}break;
		case 6:
		{K = (3 * 31) + 28 + 30 + dn;
		cout << "кол-во дней:" << K << endl; }break;
		case 7:
		{K = (3 * 31) + 28 + 2 * 30 + dn;
		cout << "кол-во дней:" << K << endl; }break;
		case 8:
		{K = (4 * 31) + 28 + 2 * 30 + dn;
		cout << "кол-во дней:" << K << endl; }break;
		case 9:
		{K = (5 * 31) + 28 + 2 * 30 + dn;
		cout << "кол-во дней:" << K << endl;
		}break;
		case 10:
		{K = (5 * 31) + 28 + 3 * 30 + dn;
		cout << "кол-во дней:" << K << endl; }break;
		case 11:
		{K = (6 * 31) + 28 + 3 * 30 + dn;
		cout << "кол-во дней:" << K << endl; }break;
		case 12:
		{K = (6 * 31) + 28 + 4 * 30 + dn;
		cout << "кол-во дней:" << K << endl; }break;
		}

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//4.	Напишите функцию f(int& m1, int& m0, int N), которая возвращает первую
		//и последнюю цифры двузначного натурального числа N.

	case 4: {
		int x, x1, x2;
		cout << "введите двузначное число:";
		cin >> x;
		x1 = x / 10;
		x2 = x - x1 * 10;
		cout << "Первая цифра:" << x1 << endl;
		cout << "Вторая цифра:" << x2 << endl;

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//5.	Напишите функцию int f(int m1, int m2, int m3), которая находит наименьшее
		//число из заданного набора трех целых чисел. Используйте условный оператор if

	case 5: {
		int a, b, c;
		cout << "введите число a:";
		cin >> a;
		cout << "введите число b:";
		cin >> b;
		cout << "введите число c:";
		cin >> c;

		if ((a < b) && (b < c))
			cout << "наименьшее число a:" << a << endl;
		if ((b < a) && (a < c))
			cout << "Наименьшее число b:" << b << endl;
		if ((c < a) && (a < b))
			cout << "Наименьшее число c:" << c << endl;
		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//6.	Напишите функцию f(int m, int n), которая определяет для пары целых
		//чисел m и n, кратно ли второе число первому

	case 6: {
		int a, b, c;
		cout << "введите число a:";
		cin >> a;
		cout << "введите число b:";
		cin >> b;
		c = b%a;
		if (c == 0)
			cout << "b кратно a." << endl;
		else
			cout << "не кратно" << endl;

		cout << "Хотите продолжить y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;
	}
}