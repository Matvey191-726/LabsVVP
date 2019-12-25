#include <iostream>
#include <windows.h>
#include <conio.h> 

using namespace std;

void live();
int random();
int randxy();
void show();
void shown();

short res = 1;
short mass[10][10];

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	int* a = new int;
	int g = 0;
	
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			mass[i][j] = 0;
		}
	shown();
	
	*a = rand();
	
	{

		mass[4][1] = 1;
		mass[4][2] = 1;
		mass[4][3] = 1;
		mass[3][3] = 1;
		mass[2][2] = 1;
	}
	for (int i = 0; i < *a; i++)
	{
		x = randxy();
		Sleep(100);
		y = randxy();
		mass[x][y] = 1;
		shown();
	}
	show();
	
	//g = 42;//debug

	while (g != 115 )//&& res != 0
	{
		live();
		show();
		//Sleep(10);
		g = _getch();
	}
	
	delete a;
	
	system("pause");
	return 0;
}

void live()
{
	bool* fatr = new bool;
	short Cmass[10][10];
	int k = 0;
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			Cmass[i][j] = mass[i][j];
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (mass[i][j] == 0)
			{
				if (mass[i + 1][j - 1] == 1) k++;
				if (mass[i + 1][j] == 1) k++;
				if (mass[i + 1][j + 1] == 1) k++;
				if (mass[i - 1][j - 1] == 1) k++;
				if (mass[i - 1][j] == 1) k++;
				if (mass[i - 1][j + 1] == 1) k++;
				if (mass[i][j + 1] == 1) k++;
				if (mass[i][j - 1] == 1) k++;
				if (k == 3) Cmass[i][j] = 1;
				k = 0;
			}
			if (mass[i][j] == 1)
			{
				if (mass[i + 1][j - 1] == 1) k++;
				if (mass[i + 1][j] == 1) k++;
				if (mass[i + 1][j + 1] == 1) k++;
				if (mass[i - 1][j - 1] == 1) k++;
				if (mass[i - 1][j] == 1) k++;
				if (mass[i - 1][j + 1] == 1) k++;
				if (mass[i][j + 1] == 1) k++;
				if (mass[i][j - 1] == 1) k++;
				if (k > 3 || k < 2) Cmass[i][j] = 0;
				k = 0;
			}
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			mass[i][j] = Cmass[i][j];
		}
	}
	
	*fatr = false;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; i < 10; i++)
		{
			if (mass[i][j] == 1)
			{
				*fatr = true;
			}
			if (*fatr) break;
		}
		if (*fatr) break;
	}
	if (!*fatr) res = 0;

	delete fatr;
}

int random()
{
	int a;
	
	srand(GetTickCount64() % 1000);
	a = rand() % 10 + 11;
	return a;
}
int randxy()
{
	int a;
	
	srand(GetTickCount64() % 1000);
	a = rand() % 10;
	
	return a;
}

void show()
{
	system("cls");
	 
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl << endl << "Нажмите Enter для следующего поколения или 's' для выхода " << endl << endl;
	system("pause");
}

void shown()
{
	system("cls");
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
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
