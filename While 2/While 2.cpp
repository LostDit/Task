#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    
	string name = "";
	int debt = 0;
	cout << "Имя?\n";
	cin >> name;
	cout << "Сумма долга?\n";
	cin >> debt;

	while(debt > 0) {
		system("cls");
		int temp;
		cout << "Должник: " << name << "\n";
		cout << "Остаток долга: " << debt << "\n";
		cout << "Введите сумму пополнения: ";
		cin >> temp;
		debt -= temp;
	}
	system("cls");
	if (debt < 0)
		cout << "Сумма остатка на счёте после закрытия долга " << abs(debt);
	else
		cout << "Долг погашен в полном объёме.";
}