﻿// Lab8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int A, B;
	cout << "Введите A: ";
	cin >> A;
	cout << "Введите B: ";
	cin >> B;
	if (A > B) {
		B = A;
		//cout << "По скольку А больше В, то значения этих переменных будут равны " << "\nA=" << A << "\nB=" << A;
	}
	else {
		if (B > A) {
			A = B;
			//cout << "По скольку B больше A, то значения этих переменных будут равны " << "\nA=" << B << "\nB=" << B;
		}
		else {
			A = 0;
			B = 0;
			//cout << "По скольку A и В равны, то значения этих переменных обнуляются " << "\nA=" << A << "\nB=" << B;
		}
	}
	cout << "A = " << A << "\tB = " << B << endl;
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
