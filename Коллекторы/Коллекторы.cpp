#include <iostream>
#include <string>
using namespace std;  

int pivo()
{
	{
		bool isCorrect = false;
		int output;
		while (!isCorrect) {
			try {
				do {
					std::string zxc;
					std::cin >> zxc;
					output = stoi(zxc);
					system("cls");
					return output;
				} while (true);
				isCorrect = true;
			}
			catch (...)
			{
				system("cls");
				std::cout << "Было введено неправильное число, повторите ввод: \n";
			}
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	string name = "";
	cout << "Имя?\n";
	cin >> name;
	cout << "Сумма долга?\n";
	int debt = pivo();

	while (debt > 0) {
		system("cls");
		cout << "Должник: " << name << "\n";
		cout << "Остаток долга: " << debt << "\n";
		cout << "Введите сумму пополнения: ";
		int input = pivo();
		debt -= input;
	}
	system("cls");
	if (debt < 0)
		cout << "Сумма остатка на счёте после закрытия долга " << abs(debt);
	else
		cout << "Долг погашен в полном объёме.";
}

