﻿// Lab22.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
	using namespace std;

	int main()
	{
		setlocale(LC_ALL, "rus"); 
		string s,name;
		fstream file;
		int i;
		cout << "Введите имя файла: " << endl;
		cin.ignore();
		getline(cin,name);
		file.open("textfile.txt");
		if (file)
		{
			while (!file.eof())
			{
				getline(file, s, '\0');
				for (i = s.find(' ') + 1; i < s.length(); i++) file << s[i];
			}
			file.close();
		}
		else cout << "Файл не существует" << endl;

		file.open(name, ios::out);
		if (file)
		{
			for (i = s.find(' ') + 1; i < s.length(); i++) file << s[i];
			cout << "Дело сделано!" << endl;
			file.close();
		}
		else cout << "Файл не существует" << endl;
		system("pause");
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
