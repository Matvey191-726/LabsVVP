﻿// Lab6.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int A, B, C, res, ost, S, S1;
	cout << "Введите длину прямоугольника: ";
	cin >> A;
	cout << "Введите ширину прямоугольника: ";
	cin >> B;
	cout << "Введите сторону квадрата: ";
	cin >> C;
	S = A * B;
	S1 = C * C;
	res = A / C;
	res = res * (B / C);
	S1 = S1 * res;
	ost = S - S1;
	cout << "Максимум помещающихся квадратов: " << res << endl;
	cout << "Площадь оставшегося места: " << ost << endl;
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