﻿// Lab18.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int m=0;
	cout << "Введите порядок квадратной матрицы\n";
	while ((m % 2) == 0)
	{
		cout << "Число должно быть нечетным:";
			cin >> m;
		}
	int** mas = new int* [m];
	for (int i = 0; i < m; i++) {
		mas[i] = new int[m];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = -1;
		}
	}
	int s = 1;
	for (int i = 0; i < m; i++) {
		mas[i][0] = s;
		s++;
	}
	for (int j = 1; j < m; j++) {
		mas[m - 1][j] = s;
		s++;
	}
	for (int i = m - 2; i >= 0; i--) {
		mas[i][m - 1] = s;
		s++;
	}
	for (int j = m - 2; j >= 1; j--) {
		mas[0][j] = s;
		s++;
	}

	int c = 1;
	int d = 1;

	while (s < m * m) {

		while (mas[c + 1][d] == -1) {
			mas[c][d] = s;
			s++;
			c++;
		}
		while (mas[c][d + 1] == -1) {
			mas[c][d] = s;
			s++;
			d++;
		}

		while (mas[c - 1][d] == -1) {
			mas[c][d] = s;
			s++;
			c--;
		}

		while (mas[c][d - 1] == -1) {
			mas[c][d] = s;
			s++;
			d--;
		}

	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] == -1) {
				mas[i][j] = s;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << endl;
		for (int j = 0; j < m; j++) {
			if (mas[i][j] < 10) {

				cout << mas[i][j] << "  ";
			}
			else {
				cout << mas[i][j] << "  ";
			}
		}
	}
	for (int i = 0; i < m; i++) {
		delete[] mas[i];
	}
	delete[]mas;
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
