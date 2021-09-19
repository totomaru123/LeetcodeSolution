// ConsoleApplication27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct fild
{
	string FLname;
	string Fname;
	string FSname;
	long long int Fnumber;
	fild(string number, string lastname, string name, string secondname)
	{
		FLname = lastname;
		Fname = name;
		FSname = secondname;
		Fnumber = stoll(number, nullptr, 10);
	}

	
};


	
	int main()
	{
		setlocale(LC_ALL, "RUS");
		ifstream out("Test_01.txt");
		vector<fild>pole;
		string name;
		string secondname;
		string lastname;
		string number;
		while(out >> number&&out >> lastname&&out >> name&&out >> secondname)
		{
			pole.push_back(fild(number, lastname, name, secondname));
		}

		cout << "Enter a number ";
		int a;
		bool znach = false;
		cin >> a;
		for (int i = 0; i < pole.size(); i++)
		{
			if (a == pole[i].Fnumber)
			{
				cout << pole[i].FLname << " " << pole[i].Fname << " " << pole[i].FSname << endl;
				znach = true;
				break;
			}
		}
		if (!znach)
		cout << "ne naideno" << endl;
	system("pause");//показать экран с результатами
	return 0;
}

