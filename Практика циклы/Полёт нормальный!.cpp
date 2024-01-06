//Задание 1. Полёт нормальный!
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Данная программа проверяет летит ли самолёт правильным эшелоном.""\n";
	std::cout << "Вот значения которые должны соблюдаться для правильного полёта""\n";
	std::cout << "Скорость в диапазоне от 750 до 850 км/ч""\n";
	std::cout << "Высота — в диапазоне от 9 000 до 9 500 метров""\n";

	string testResult[3]{ " в пределах допустимого.""\n", " ниже допустимого.""\n", " превышает допустимую.""\n" };
	string heightStr{ "Высота" };
	string speedStr{ "Скорость" };
	
	int speed;
	int height;


	std::cout << "Введите скорость самолёта: \n";
	std::cin >> speed;

	std::cout << "Введите высоту самолёта: \n";
	std::cin >> height;

	
	if ((speed >= 750) && (speed <= 850))
		
		std::cout << speedStr + testResult[0];
	
			else if (speed < 750)
		
				std::cout << speedStr + testResult[1];
	
					else
		
						std::cout << speedStr + testResult[2];
	
		
	if ((height >= 9000) && (height <= 9500))
		
			std::cout << heightStr + testResult[0];
	
				else if (height < 9000)
		
					std::cout << heightStr + testResult[1];
	
						else
					
							std::cout << heightStr + testResult[2];

	std::cout << "В данный момент высота: " << height << "\n";
	
	std::cout << "А скорость равна: " << speed << "\n";
}