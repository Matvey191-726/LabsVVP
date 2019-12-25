﻿// Lab17.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, k, l = 0;
	cout << "Введите размер массивов: ";
	cin >> n;
	int* a = new int[n];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Введите K (>0): ";
	cin >> k;
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i - 1]) {
			l++;
		}
	}
	
	int* b = new int[l];
	int* lenght = new int[l];
	for (int i = 0; i < l; i++) {
		lenght[i] = 1;
	}
	b[0] = a[0];
	for (int i = 1, j = 1, c = 0; i < n; i++) {
		if (a[i] != a[i - 1]) {
			b[j] = a[i];
			j++;
			c++;
		}
		else {
			lenght[c]++;
		}
	}

	for (int i = 0, x = 0; i < l; i++) {
		if (i == k - 1) {
			for (int j = lenght[l - 1]; j > 0; j--) {
				a[x] = b[l - 1];
				x++;
			}
		}
		else if (i == l - 1) {
			for (int j = lenght[k - 1]; j > 0; j--) {
				a[x] = b[k - 1];
				x++;
			}
		}
		else {
			for (int j = lenght[i]; j > 0; j--) {
				a[x] = b[i];
				x++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
	delete[]a;
	delete[]b;
	delete[]lenght;
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