//Задание 2. Слишком большие числа
#include <iostream>
#include<string>

int main(void) {
	setlocale(LC_ALL, "Russian");
	int a, counter = 0;								// i - переменная для счёта сколько цифр в числе
	bool check = 0;
	const std::string alphabet = "0123456789";
	std::string input;
	std::cout << "Введите число: \n";

	getline(std::cin, input);

	for (int i = input.length() - 1; i > -1; i--)
	{

		if (alphabet.find(input[i]) < 10)
			counter++;
		else
		{
			check = true;
			break;
		}

	}if (!check)
		std::cout << "Цифр в числе: " << counter << "\n";
	else
		std::cout << "В числе имеются нечисловые символы \n";
	system("pause");
}