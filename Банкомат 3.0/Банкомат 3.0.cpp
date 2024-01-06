//3.0
//#include <iostream>

//int main() {
	
	//setlocale(LC_ALL, "Russian");
	//int a, b, c, d;

	//std::cout << "Введите 4 числа для входа в банк\n";
	
	
	//do {
		
		//std::cin >> a >> b >> c >> d;
		//std::cout << "Попробуйте ещё раз, сумма 4 чисел не равна 42\n";
	
	//} while (a + b + c + d != 42);

		//std::cout << "Ввод корректный!\n";

//}

//4.0
#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");

	std::cout << "Введите число/числа чтобы войти в банк: \n";

	std::cout << "--------------------------\n";

	int sum = 0, value = 0,a=0;
	
	while (std::cin >> value) {

		sum += value;
		a++;
		std::cout << "Вы ввели: " << a <<" число." "\n";
		if (a >= 4) break;
	
	}if (sum != 42) {

		std::cout << "----------------------------\n";
		std::cout << "Сумма не равна 42. Ввод не корректный. \n";

	}else if (sum == 42) {
		
		std::cout << "----------------------------\n";
		std::cout << "Ввод корректный\n";

	}
}