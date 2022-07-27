#include <iostream>
#include <vector>
#include <conio.h>
#include <string>;
using namespace std;

bool CheckingNumbers(const string& s) {
	bool b = true;
	for (auto& a : s) {
		if (!isdigit(a)) {
			b = false;
			break;
		}
	}
	return b;
}
bool CheckingDouble(const string& s) {
	bool b = true;
	for (auto& a : s) {
		if (!isdigit(a) && a != '.' && a != '-') {
			b = false;
			break;
		}
	}
	return b;
}
int main()
{
	vector <int> I;
	vector <double> D;
	vector <string> S;
	auto iters= S.cbegin();

	char ch, item_ch[15];
	string str;
	int index, count = 0;

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
		int item;
		do {
			cout << "\n1 - Add in back\n2 - Add by index\n3 - Print all\n";
			ch = _getch();
			switch (ch)
			{
			case'1':
				do {
					cout << "Put item(int): ";
					cin >> str;
					if (CheckingNumbers(str))
						item = stoi(str);
					else
						cout << "Incorrect item type\n";
				} while (!CheckingNumbers(str));
				I.push_back(item);
				count++;
				break;
			case'2':
				do {
					cout << "Put item(int): ";
					cin >> str;
					if (CheckingNumbers(str))
						item = stoi(str);
					else
						cout << "Incorrect item type\n";
				} while (!CheckingNumbers(str));

				do {
					cout << "Put index: ";
					cin >> str;
					if (CheckingNumbers(str))
						index = stoi(str);
					else
						cout << "Incorrect index type\n";
				} while (!CheckingNumbers(str));
				if (index - 1 > count) {
					cout << "Out of range!\n";
					break;
				}
				try {
					auto iteri = I.cbegin();
					I.emplace(iteri + (index - 1), item);
					I.erase(I.begin() + index);
				}
				catch (runtime_error e)
				{
					cout << e.what() << endl;
				}
				break;
			case'3':
				for (int a : I) {
					cout << a << "\t";
				}
				break;

			}
		} while (ch != 27);
	}
	else if (ch == '2') {
		double item;
		do {
			cout << "\n1 - Add in back\n2 - Add by index\n3 - Print all\n";
			ch = _getch();
			switch (ch)
			{
			case'1':
				do {
					cout << "Put item(double): ";
					cin.getline(item_ch, 30);
					if (CheckingDouble(item_ch))
						item = atof(item_ch);
					else
						cout << "Incorrect item type(3.2)\n";
				} while (!CheckingDouble(item_ch));
				D.push_back(item);
				count++;
				break;
			case'2':
				do {
					cout << "Put item(double): ";
					cin.getline(item_ch, 30);
					if (CheckingDouble(item_ch))
						item = atof(item_ch);
					else
						cout << "Incorrect item type(2.3)\n";
				} while (!CheckingDouble(item_ch));

				do {
					cout << "Put index: ";
					cin >> str;
					if (CheckingDouble(str))
						index = stoi(str);
					else
						cout << "Incorrect index type(int)\n";
				} while (!CheckingDouble(str));
				if (index - 1 > count) {
					cout << "Out of range!\n";
					break;
				}
				try {
					auto iterd = D.cbegin();
					D.emplace(iterd + (index - 1), item);
					D.erase(D.cbegin() + index);
				}
				catch (runtime_error e)
				{
					cout << e.what() << endl;
				}
				break;
			case'3':
				for (double a : D) {
					cout << a << "\t";
				}
				break;

			}
		} while (ch != 27);
	}
	else {	
		string item;
		do {
			cout << "\n1 - Add in back\n2 - Add by index\n3 - Print all\n";
			ch = _getch();
			switch (ch)
			{
			case'1':
					cout << "Put item(string): ";
					cin >> item;
				S.push_back(item);
				count++;
				break;
			case'2':
					cout << "Put item(int): ";
					cin >> item;

				do {
					cout << "Put index: ";
					cin >> str;
					if (CheckingNumbers(str))
						index = stoi(str);
					else
						cout << "Incorrect index type\n";
				} while (!CheckingNumbers(str));

				if (index - 1 > count) {
					cout << "Out of range!\n";
					break;
				}
				try {
					auto iters = S.cbegin();
					S.emplace(iters + (index - 1), item);
					S.erase(S.cbegin() + index);
				}
				catch (runtime_error e)
				{
					cout << e.what() << endl;
				}
				break;
			case'3':
				for (string a : S) {
					cout << a << "\t";
				}
				break;

			}
		} while (ch != 27);
	}
}
