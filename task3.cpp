#include <iostream>
using namespace std;
char* addInArray(char* simbol, int numberStr, char* str);
int main()
{
	int countStr = 256;
	char* str = new char[256]{ "abcdifghijklmnopqrstuvwxyz\0" };
	char* simbol = new char[2];
	int exit;
	int numberStr;
	do
	{
		cout << "str: " << str << endl;
		int chek = 0;
		do
		{
			int size = strlen(str);
			cout << "specify number of a position: ";
			cin >> numberStr;
			if (numberStr >= 0 &&
				numberStr < size &&
				size < countStr)
			{
				chek++;
			}
			else
			{
				cout << "don't number of a position!!!" << endl << "maximum a position = " << strlen(str) << endl;
			}
		} while (chek == 0);
		cout << endl << "enter simbol: ";
		getchar();
		cin.getline(simbol, 2);
		cout << "new str: " << addInArray(simbol, numberStr, str) << endl << "restart: 1\nexit: 0\nenter: ";
		cin >> exit;
	} while (exit != 0);
	delete[] str;
}

char* addInArray(char* simbol, int numberStr, char* str)
{
	char* temp = new char[256];
	strcpy(temp, str);
	strcpy(&temp[numberStr], simbol);
	strcpy(&temp[numberStr + 1], &str[numberStr]);
	strcpy(str, temp);
	delete[] temp;
	return str;
}

//Написать функцию, которая вставляет в строку в указанную позицию заданный символ.