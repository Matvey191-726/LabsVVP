﻿
// Lab22.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string s, name;
	fstream file;
	int b;
	cout << "Введите имя файла: " << endl;
	getline(cin, name);
	file.open(name);
	if (file)
	{
		getline(file, s, '\0');
		file.close();
	}
	else cout << "Первый файл не существует" << endl;
	b = 0;
	for (int i = 4; i < s.length(); i++)
	{
		if (s[i - 4] == ' ' && s[i - 3] == ' ' && s[i - 2] == ' ' && s[i - 1] == ' ' && s[i] == ' ')
		{
			b++;
		}
	}

	cout << "Количество абзацев в тексте: " << b << endl;
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
