// Lab16.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void Fillmas(int* const mas, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> mas[i];
	}
}
void Showmas(int* const mas, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	int size,secondsize, temp = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	int* mas = new int[size];
	Fillmas(mas, size);
	cout << "\n";
	Showmas(mas, size);
	cout << "\n";
	for (int i = 0; i < size; i++) {
		if (mas[i] > 0) {
			temp++;
		}
	}
	secondsize=size+temp;
	int* secondmas = new int[secondsize];
	for (int i = 0, j = 0; i < secondsize; i++, j++) {
		if (mas[j] > 0) {
			secondmas[i] = 0;
			i++;
			secondmas[i] = mas[j];
		}
		else
		{
			secondmas[i] = mas[j];
		}
	}
	Showmas(secondmas, secondsize);

	return 0;
	delete[] secondmas;
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
