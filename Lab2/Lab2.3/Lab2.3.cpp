﻿// Lab2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	double A, B, C, AC, BC, p;
	cout << "Введите A:";
	cin >> A;
	cout << "Введите B:";
	cin >> B;
	cout << "Введите C:";
	cin >> C;
	if (B > C&& C > A) {
		AC = B - A;
		BC = B - C;
		p = AC * BC;
		cout << "Длина AC:" << AC << endl;
		cout << "Длина BC:" << BC << endl;
		cout << "Произведение отрезков AC и BC:" << p;
	}
	else {
		cout << "Введенные данные не соответствуют условию (B > C && C > A):";
	}
	return 0;
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
