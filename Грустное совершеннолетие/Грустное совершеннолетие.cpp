//Задание 6. Грустное совершеннолетие
#include <iostream>

int main()
{
	setlocale (LC_ALL, "Russian");
	int day, month, year;
	int day2, month2, year2;

	std::cout << "Введите день, месяц год в данный момент: \n";
	std::cin >> day >> month >> year;
	
	std::cout << "Введите дату рождения кто будет покупать алкоголь: \n";
	std::cin >> day2 >> month2 >> year2;

		
	int a = day - day2; //разница в дне
	
	int b = month - month2; // разница в месяце
	
	int c = year - year2; //разница в годах
		
		std::cout << "------Граница для расчётов------\n";
	
	if ((day > 31 || 1 > day) || (day2 > 31 || 1 > day2)) {

		std::cout << "Вы ввели некорректный день\n";

	}else if ((1 > month || month > 12) || (1 > month2 || month2 > 12)) {

		std::cout << "Вы ввели некорректный месяц\n";

	}else if (year < 0 || year2 < 0) {
	
		std::cout << "Вы ввели некорректно год\n";
	
	}else if (((b <= 0 && a < 1) && c < 18) || (b < 0 && c <= 18 )||(b == 0 && a > 1 && c == 18 )) {
		
		std::cout << "Нельзя продавать алкоголь \n";

	}else {

		std::cout << "Можно продавать алкоголь \n";
	}
}