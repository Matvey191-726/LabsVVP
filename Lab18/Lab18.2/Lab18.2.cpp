﻿// Lab18.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int m, n,s=1,k=0;

	cout << "Введите размерность матрицы M на N: \n";
	cin >> m >> n;

	cout << "Введите K \n";
	while (m<k || k<1)
	{
		cout << "Число должно соблюдать условие 1<=K<=M: ";
		cin >> k;
	}
	int** mas = new int*[m];
	for (int i = 0; i < m; i++)
	{
		mas[i] = new int[n];
	}

	/*cout << "Введите элементы матрицы: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
		cout << endl;
	}*/
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*cout << mas[i][j] << "  ";*/
		    mas[i][j] = s;
			s++;
			cout << mas[i][j] << "  ";
		}
		cout << endl;
	}
	int sum=0,p=1;
	for (int i = 0; i < m; i++)
	{
		if (i == k)
		{
			for (int j = 0; j < n; j++)
			{
				sum += mas[i][j];
				p *= mas[i][j];
			}
		}
	}
	cout << "Сумма строки K равна: "<<sum<<endl;
	cout << "Произведение строки G:"<<p;




	for (int i = 0; i < m; i++)
		delete mas[i];
	delete[] mas;
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