// Lab17.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void Fillmas(int* const A, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
}
void Showmas(int* const A, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	int size,secondsize, temp = 1,temp1;
	cout << "Введите размер массива: ";
	cin >> size;
	int* A = new int[size];
	Fillmas(A, size);
	cout << "\n";
	Showmas(A, size);
	cout << "\n";
	secondsize = 0;
	for (int i = 0; i < size; i++) {
		if (A[i]!=A[i-1]) {
			secondsize++;
		}
	}
	int* B = new int[secondsize];
	int* C = new int[secondsize];
	temp1 = A[0];
	for (int j = 0; j < secondsize; j++)
	{
		for (int i = 0; i < size; i++)
		{
			if (A[i] == A[i + 1])
			{
				temp++;
				temp1 = A[i];

			}
			else
			{
				B[j] = temp;
				C[j] = temp1;
				temp = 1;
				temp1 = A[0];
				j++;

			}
		}

	}
	Showmas(B, secondsize);
	cout << "\n";
	Showmas(C, secondsize);

	return 0;
	delete[] C;
	delete[] B;
	delete[] A;
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
