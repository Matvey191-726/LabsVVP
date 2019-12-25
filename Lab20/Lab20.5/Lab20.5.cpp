// Lab20.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int kol = 0,len,count=0,pos=0;
	string str, str1;
	cout << "Введите строку 1:\n";
	getline(cin, str);
	cout << "Введите строку 2:\n";
	getline(cin, str1);
	len = str1.length();
	while ((pos = str.find(str1, pos)) != string::npos)
	{
		pos += len;
		++count;
	}

		cout << "Found " << count << " matches" << std::endl;

	system("pause");
	return 0;
}
