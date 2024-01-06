#include <iostream>
#include <cmath>

int main() {
	
	setlocale(LC_ALL, "Russian");
	
	int number;
	double a;

	do
	{
		std::cout << "----------------------------------\n";
		
		std::cout << "Введите число квадратных метров\n";
		std::cin >> number;
		
		a = sqrt(number);
		
			if (number > 1000000) {

			std::cout << "Самый большой участок равен 1000000 м2 повторите запрос более корректно.\n";
			break;
			
}
		
		if (a - int(a) == 0) {
			
			std::cout << "----------------------------------\n";
			std::cout << "Да участок является квадратным\n";
			std::cout << a << "\n" << number << "\n";
			
		}else {
			
			std::cout << "----------------------------------\n";
			std::cout << "Нет участок не является квадратным\n";
			std::cout << a << "\n" << number << "\n";
		
		}
	} while (true);
}