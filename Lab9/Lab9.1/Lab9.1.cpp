﻿// Lab9.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int  d,d1, a = 0,m;
	string s,n;

	cout << "Введите день от 1 до 31: ";
	cin >> d;
	cout << "Введите день от 1 до 12: ";
	cin >> m;
	if ((d > 0 && d < 32)&&(m > 0 && m < 13)) {
		if (d > 10 && d < 20) {
			switch (d) {
			case 11:
				s = "Одинадцатое "; break;
			case 12:
				s = "Двенадцатое "; break;
			case 13:
				s = "Тринадцатое "; break;
			case 14:
				s= "Четырнадцатое "; break;
			case 15:
				s = "Пятнадцатое "; break;
			case 16:
				s = "Шестнадцатое "; break;
			case 17:
				s = "Семнадцатое "; break;
			case 18:
				s = "Восемнадцатое "; break;
			case 19:
				s = "Девятнадцатое "; break;
			}
		}
		else {
			a = d % 10; // число единиц
			d1 = d - a; //число десятков
			switch (d1) {
			case 10:
				s = "Десят"; break;
			case 20:
				s = "Двадцат"; break;
			case 30:
				s = "Тридцат"; break;
			}
			switch (a) {
			case 0:
				s += "ое "; break;
			case 1:
				s += "ь первое "; break;
			case 2:
				s += "ь второе "; break;
			case 3:
				s += "ь третье "; break;
			case 4:
				s += "ь четвертое "; break;
			case  5:
				s += "ь пятое "; break;
			case 6:
				s += "ь шестое "; break;
			case 7:
				s += "ь седьмое "; break;
			case 8:
				s += "ь восьмое "; break;
			case 9:
				s += "ь девятое "; break;
			}
		}
		if (m == 2) {
			if (m == 2 && d < 29) {
				s += "Февраля";
				cout << s;
			}
			else { cout << "В Феврале меньше 29 дней"; }
		}
		else {
			if (d < 31) {
				switch (m) {
				case 1:
					s += "Января";
					cout << s;
					break;
				case 3:
					s += "Марта";
					cout << s;
					break;
				case 5:
					s += "Мая";
					cout << s;
					break;
				case 7:
					s += "Июля";
					cout << s;
					break;
				case 8:
					s += "Августа";
					cout << s;
					break;
				case 10:
					s += "Октября";
					cout << s;
					break;
				case 12:
					s += "Декабря";
					cout << s;
					break;
				case 4:
					s += "Апреля";
					cout << s;
					break;
				case 6:
					s += "Июня";
					cout << s;
					break;
				case 9:
					s += "Сентября";
					cout << s;
					break;
				case 11:
					s += "Ноября";
					cout << s;
					break;
				}
			}
			else {
				if (d == 31) {
					switch (m) {
					case 1:
						s += "Января";
						cout << s;
						break;
					case 3:
						s += "Марта";
						cout << s;
						break;
					case 5:
						s += "Мая";
						cout << s;
						break;
					case 7:
						s += "Июля";
						cout << s;
						break;
					case 8:
						s += "Августа";
						cout << s;
						break;
					case 10:
						s += "Октября";
						cout << s;
						break;
					case 12:
						s += "Декабря";
						cout << s;
						break;
					default:
						cout << "В введенном месяце только 30 дней";
					}
				}
				/*else {
					if (m == 2 && d < 29) {
						s += "Февраля";
					}
					else { cout << "В Феврале меньше 29 дней"; }
				}*/
			}
		}
	}
	else {
		cout << "Введеннй день должен быть в диапазоне от 1 до 31 и месяц должен быть в диапазоне от 1 до 12";
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
