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
	cout << "������� ����� �������:";
	cin >> a;
	switch (a)
	{

		//1.	�������� ������� int f(int h, int m, int s), ������� ��������� ���
				//����� ��������� (���� h, ������ m � ������� s) � ���������� ���������� ������,
				//��������� � ������ ���.

	case 1: {
		int h, m, s, t;
		int i = 0;
		cout << "������� �����(1-3):";
		cin >> i;
		if (i == 1)
		{
			cout << "������� ���-�� �����:";
			cin >> h;
			t = h * 360; 
				cout << "���������� ������:" << t << endl;
		}
		else if (i == 2)
		{
			cout << "������� ���-�� �����:";
			cin >> m;
			t = m * 60;
			cout << "���������� ������:" << t << endl;
		}
		else if (i == 3)
		{
			cout << "������� ���-�� ������:";
			cin >> s;
			t = s;
			cout << "���������� ������:" << t << endl;
		}

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//2.	�������� ������� int f(int m, int d), ������� ��������� ��� �����
		//��������� (����� m � ���� d) � ���������� ���������� ����, ���������
		//� ������ ����. �������, ��� � ������ ������ 30 ����.

	case 2: {
		int m, dn, K;
		cout << "������� ����� (1-12):";
		cin >> m;
		cout << "������� ���� (1-30):";
		cin >> dn;
		K = dn + ((m - 1) * 30);
		cout << "���������� ���� � ������ ����:" << K << endl;

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//3.	�������� ������� int f(int m, int d), ������� ��������� ��� 
		//����� ��������� (����� m � ���� d) � ���������� ���������� ����,
		//��������� � ������ ����. �������, ��� � ������ ������ 30 ��� 31����, 
		//� ��� �� ����������.??????

	case 3: {
		int m, dn, K, kd, kd1, kd2;

		cout << "������� ����� (1-12):";
		cin >> m;
		cout << "������� ���� (1-30):";
		cin >> dn;
		switch (m)
		{
		case 1:
			K = dn;
		case 2:
		{K = 31 + dn;
		cout << "���-�� ����:" << K << endl; }break;
		case 3:
		{K = 31 + 28 + dn;
		cout << "���-�� ����:" << K << endl;
		}break;
		case 4:
		{K = (31 * 2) + 28 + dn;
		cout << "���-�� ����:" << K << endl; }break;
		case 5:
		{K = (2 * 31) + 28 + 30 + dn;
		cout << "���-�� ����:" << K << endl;
		}break;
		case 6:
		{K = (3 * 31) + 28 + 30 + dn;
		cout << "���-�� ����:" << K << endl; }break;
		case 7:
		{K = (3 * 31) + 28 + 2 * 30 + dn;
		cout << "���-�� ����:" << K << endl; }break;
		case 8:
		{K = (4 * 31) + 28 + 2 * 30 + dn;
		cout << "���-�� ����:" << K << endl; }break;
		case 9:
		{K = (5 * 31) + 28 + 2 * 30 + dn;
		cout << "���-�� ����:" << K << endl;
		}break;
		case 10:
		{K = (5 * 31) + 28 + 3 * 30 + dn;
		cout << "���-�� ����:" << K << endl; }break;
		case 11:
		{K = (6 * 31) + 28 + 3 * 30 + dn;
		cout << "���-�� ����:" << K << endl; }break;
		case 12:
		{K = (6 * 31) + 28 + 4 * 30 + dn;
		cout << "���-�� ����:" << K << endl; }break;
		}

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//4.	�������� ������� f(int& m1, int& m0, int N), ������� ���������� ������
		//� ��������� ����� ����������� ������������ ����� N.

	case 4: {
		int x, x1, x2;
		cout << "������� ���������� �����:";
		cin >> x;
		x1 = x / 10;
		x2 = x - x1 * 10;
		cout << "������ �����:" << x1 << endl;
		cout << "������ �����:" << x2 << endl;

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//5.	�������� ������� int f(int m1, int m2, int m3), ������� ������� ����������
		//����� �� ��������� ������ ���� ����� �����. ����������� �������� �������� if

	case 5: {
		int a, b, c;
		cout << "������� ����� a:";
		cin >> a;
		cout << "������� ����� b:";
		cin >> b;
		cout << "������� ����� c:";
		cin >> c;

		if ((a < b) && (b < c))
			cout << "���������� ����� a:" << a << endl;
		if ((b < a) && (a < c))
			cout << "���������� ����� b:" << b << endl;
		if ((c < a) && (a < b))
			cout << "���������� ����� c:" << c << endl;
		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//6.	�������� ������� f(int m, int n), ������� ���������� ��� ���� �����
		//����� m � n, ������ �� ������ ����� �������

	case 6: {
		int a, b, c;
		cout << "������� ����� a:";
		cin >> a;
		cout << "������� ����� b:";
		cin >> b;
		c = b%a;
		if (c == 0)
			cout << "b ������ a." << endl;
		else
			cout << "�� ������" << endl;

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;
	}
}