// Lab16.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

void Fillmas(int* const mas, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cin>>mas[i];
	}
}
void Showmas(int* const mas, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<<mas[i]<<" ";
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	int size;
	cout<<"Введите размер массива: ";
	cin>>size;
	int* mas = new int[size+2];
	Fillmas(mas, size);
	cout << "\n";
	Showmas(mas, size);
	int max = mas[0], maxind = 0, min = mas[0], minind = 0;
	for (int i = 1; i < size; i++)
	{
		if (mas[i] < min)
		{
			min = mas[i];
			minind = i;
		}
		if(mas[i]>max)
		{
			max = mas[i];
			maxind = i;
		}
	}
	
	size++;
	for ( int i = size - 1; i > minind; --i) mas[i] = mas[i - 1];
	mas[minind] = 0;

	/*size++;
	for ( int i = size - 1; i > maxind+1; --i) mas[i] = mas[i - 1];
	mas[maxind + 2] = 0;*/
	cout << "\n";
	Showmas(mas, size);

	return 0;
	delete[] mas;
}
//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	int n,i;
//	cout << "Введите размер массива: ";
//	cin >> n;
//	int* mas = new int[n];
//	for (i = 0; i < n; i++)
//	{
//		cin >> mas[i];
//	}
//	cout << "Изначальный Массив: ";
//	for (i = 0; i < n; i++)
//	{
//		cout << mas[i] << " ";
//	}
//	cout << "\nИзмененный массив: ";
//	
//	int min=mas[0], max=mas[0],maxind=0,minind=0;
//	for ( i = 0; i < n; i++)
//	{
//		if(mas[i]<min)
//		{
//			min = mas[i];
//			minind = i;
//		}
//		if(mas[i]>max)
//		{
//			max = mas[i];
//			maxind = i;
//		}
//	}
//	int* mas = new int[n+2];
//	for ( i = 0; i < n; i++)
//	{
//		mas[i]=mas[i]
//	}
//	for (i = 0; i >= ; i--) mas[i] = mas[i - 1];
//	mas[minind] = 0;
//
//	for (i = n+2; i > maxind; i--) mas[i] = mas[i - 1];
//	mas[maxind + 1] = 0;
//	for ( i = 0; i < n; i++)
//	{
//		cout << mas[i];
//	}
//	delete[] mas;
//	system("pause");
//	return 0;
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
