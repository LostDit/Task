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
	int X, Y, i = 0;
	double P;
	setlocale(LC_ALL, "Russian");
	cout << "Введите размер вклада: \n";
	X = pivo();
	cout << "Введите желаемую сумму: \n";
	Y = pivo();
	if (X > Y)	{

		cout << "Введёный вклад больше, чем желаемая сумма.";
		return 0;

	}
	cout << "Введите процентную ставку: \n";
	P = pivo();
	P = 1 + P / 100.;

	do {

		X *= P;
		i++;

	} while (X < Y);
	cout << "Потребуется " << i << " лет для достижения суммы " << Y;
}