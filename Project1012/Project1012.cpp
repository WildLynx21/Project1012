#include "stdafx.h"
#include <iostream>
#include <studio.h>
#include "locale"
using namespace std;
int main()
{
	string NAME;
	cin >> NAME;
	system("cls");
	setlocale(LC_ALL, "Russian");
	FILE*infile;
	infile = fopen(NAME.c_str()); // УЗНАТЬ
	if (!infile)
	{
		cout << "Файл не найден!" << endl;
		return 1;
	}



	return 0;
}

