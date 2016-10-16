#include <iostream>
using namespace std;
char* deleteCharInArray(char* str, char* simbol);
int main()
{
	char* str = new char[28]{ "abcdifghijklmnopqrstuvwxyz\0" };	int exit;
	char* simbol = new char[2];
	int h = 0;
	do
	{
		cout << "str: " << str << endl << "enter simbol delete: ";
		if (h != 0)										//если оставить без проверки на первый вход то не отрабатывает удаление 
		{
			getchar();
		}
		h++;
		cin.getline(simbol, 2);
		str = deleteCharInArray(str, simbol);
		cout << "new str: " << str << endl << "restart: 1\nexit: 0\nenter";
		cin >> exit;
	} while (exit != 0);
	delete[] str;
	delete[] simbol;
}

char* deleteCharInArray(char* str, char* simbol)
{
	int check = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == *simbol)
		{
			strcpy(&str[i], &str[i + 1]);
			check++; 
		}
	}
	if (check < 1)
	{
		cout << "No changes";
	}
	return str;
}

//Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.
