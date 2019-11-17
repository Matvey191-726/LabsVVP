﻿// Lab13.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int N,A,B,C;

	cout << "Введите число N: ";
	cin >> N;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;

	while (N <= 1)
	{
		cout << "N должно быть > 1\n" << "Введите число N: ";
		cin >> N;
	}

	double* mas = new double[N];
	mas[0] = A;
	mas[1] = B;
	C = A + B;
	for (int i = 2; i < N; i++)
	{
		mas[i] = C;
		C += C;
	}
	cout << "Массив: ";
	for (int i = 0; i < N; i++)
		cout << mas[i] << " ";

	cout << "\n\n";
	delete[] mas;
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
