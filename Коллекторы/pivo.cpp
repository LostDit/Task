#include <iostream>
#include <string>
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
}