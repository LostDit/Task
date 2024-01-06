
#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");

	int sum = 0, value = 0;

	std::cout << "Введите числа которые хотите сложить, после чего поставьте знак '=' и вам выдаст ответ.\n";

	while (std::cin >> value)

		sum += value;

	std::cout << "Сумма чисел равна: " << sum << std::endl;

	return 0;

}