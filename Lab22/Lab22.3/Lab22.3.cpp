// Lab22.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string s,s1, name,secondname;
	fstream FirstFile,SecondFile;
	cout << "Введите имя файла: " << endl;
	getline(cin, name);
	FirstFile.open(name);
	if (FirstFile)
	{
		getline(FirstFile, s1, '\0');
		FirstFile.close();
	}
	else cout << "Первый файл не существует" << endl;

	cout << "Введите имя второго файла: " << endl;
	getline(cin, secondname);
	SecondFile.open(secondname);
	if (SecondFile)
	{
		getline(SecondFile, s, '\0');
		SecondFile.close();
	}
	else cout << "Второй файл не существует" << endl;

	FirstFile.open(name, ios::out);
	if (FirstFile)
	{
		FirstFile << s << s1;
		cout << "Дело сделано!" << endl;
		FirstFile.close();
	}
	else cout << "Файл не существует" << endl;
}



