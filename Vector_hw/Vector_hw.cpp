#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;


int main()
{
	vector <int> I;
	vector <double> D;
	vector <string> S;
	char ch;
	do {
		cout << "Choise typename of vector:\n1 - int\n2 - double\n3 - string\n";
		ch = _getch();
		switch (ch)
		{
		case'1':
			cout << "\nTypename = int\n";
			break;
		case'2':
			cout << "\nTypename = double\n";
			break;
		case'3':
			cout << "\nTypename = string\n";
			break;
		}
	} while (ch != '1' && ch != '2' && ch != '3');
	if (ch == '1') {
		do {
			cout << "\n1 - Add in back\n2 - Add by index\n3 - Print all\n";
			ch = _getch();
			switch (ch)
			{
			case'1':

				break;
			case'2':

				break;
			case'3':

				break;

			}
		} while (ch != 27);
	}
}
