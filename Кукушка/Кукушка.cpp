//Задание 1. Кукушка
#include <iostream>
using namespace std;
int main() {
	
	setlocale(LC_ALL, "Russian");

	int a,b=0,i=0;
	cout << "Введите, который час: \n";
	cin >> a;
	
		a = a % 12;
		if (a == 0)
				a = 12;
	while (i < a)
	{
		i++;
		cout << "Ку - ку!\n";

	}
}