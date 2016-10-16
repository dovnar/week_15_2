#include <iostream>
using namespace std;
char* deleteCharInArray(char* str, int numberStr);
int main()
{
	int count = 28;
	char* str = new char[28]{"abcdifghijklmnopqrstuvwxyz\0"};
	int exit;
	int numberStr;
	do
	{
		cout << "str: " << str << endl;
		int chek = 0;
		do
		{
			cout << "enter number delete: ";
			cin >> numberStr;
			if (numberStr >= 0 && numberStr < count)
			{
				chek++;
			}
			else
			{
				cout << "don't number for delete!!!" << endl;
			}
		} while (chek == 0);
		cout << "new str: " << deleteCharInArray(str, numberStr)<< endl << "restart: 1\nexit: 0\nenter";
		cin >> exit;
		count--;
	} while (exit != 0);
	delete[] str;
}

char * deleteCharInArray(char * str, int numberStr)
{
	strcpy(&str[numberStr], &str[numberStr + 1]);
	return str;
}

//Написать функцию, которая удаляет из строки символ с заданным номером.
