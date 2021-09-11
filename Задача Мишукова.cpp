// ConsoleApplication25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

const char *FNAME = "Test01.txt";
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int i;
	int count = 1;
	int N = 0;


	ifstream f; //Создание класса для чтения
	f.open(FNAME);//Открыть файл для чтения
	char symbol;//Ввод универсальной переменной
	while (true) 
	{
		f.get(symbol);//Считывание текущего символа
		if (f.eof()) break;
		if (symbol == ' ') count++;//Если данный символ является пробелом то число элементов в векторе увеличить на 1
		if (symbol == '\n') break;//Если данный символ является концом строки выйти из цикла
	}
	//f.seekg(0, ios::beg);//(1)
	//f.clear();//(2)
	//Строки (1) и (2) переводят курсор в начало файла
	cout << "Количество элементов в массиве = " << count << endl;
	std::vector<int> v1(count);
	f.close();
	f.open(FNAME);
	while (!f.eof())//Пока не найдкен конец файла
	{
		f >> v1[N];//Считывание элемента матрицы из файла
		cout << v1[N] << " ";//Вывод элемента матрицы на экран
		N++;
	}
	cout << endl;
	f.close();// Закрыть файл

	int j;
	int k = 0;
	int s = 1;
	int M = (pow(2, count))-1;
	for (i = 0; i <= M; i++)
	{
		k = 0;
		s = 1;
		j = i;
		while (j)
		{
			k = k+((j % 2) * s);
			s = s * 10;
			j = j / 2;
		}
		cout << "{";
		for (j = 0; j < count; j++)
		{
			if ((k % 10) == 1)
			{
				cout << v1[j] << " ";
			}
			k = k / 10;
		}
		cout << "}, ";
	}



	system("pause");//показать экран с результатами

	return 0;
}

