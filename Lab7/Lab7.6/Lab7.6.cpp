﻿// Lab7.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "Введите a:";
	cin >> a;
	cout << "Введите b:";
	cin >> b;
	cout << "Введите c:";
	cin >> c;
	if (a > b&& a > c&& pow(a, 2) == pow(b, 2) + pow(c, 2)) {
		cout << "Истина";
	}
	else {
		if (b > a&& b > c&& pow(b, 2) == pow(a, 2) + pow(c, 2)) {
			cout << "Истина";
		}
		else {
			if (c > a&& c > b&& pow(c, 2) == pow(a, 2) + pow(b, 2)) {
				cout << "Истина";
			}
			else {
				cout << "Ложь";
			}
		}
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
