#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int LCM(int a, int b)
{
	a = abs(a), b = abs(b);
	if (b == 0)
	return a;
	else 
	return LCM(b, a % b);
}

int main() {
	setlocale(LC_ALL, "Russian");
	string a, b;
	int number1, number2;
	bool isCorrect = 0;
	while (!isCorrect)
	{
		try
		{
			cout << "Введите числитель и знаменатель\n";
			cin >> a >> b;
			number1 = stoi(a);
			number2 = stoi(b);
			isCorrect = 1;
		}
		catch (...)
		{
			cout << "Ввод некорректен\n";
		}
	}
	int lcm = LCM(number1, number2);
	cout << number1 / lcm << " \\ " << number2 / lcm;
}