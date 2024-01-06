#include <iostream>
#include <string>
#include <math.h>

/*int main() {
	setlocale(LC_ALL, "Russian");

	std::string input;
	
	std::cout << "Введите число: \n";
	std::getline(std::cin, input);
	int length = input.length();
	int x = 0, counterCorrect = 0, counterIncorrect = 0;
	while (x < length)
	{
		if (x > length) break;
		int i = 0; //i = 0 = x = length; j = 0
		for (i = x; i < length &&  input[i] != ' '; i++);
		i++;
		int j = 0;
		for (j = x; j < i && (input[j] == '1' || input[j] == '0'); j++);
		if (j == i - 1)
			counterCorrect++;
		else
			counterIncorrect++;
		x = i;
	}
	std::cout << "Из введённых чисел " << counterCorrect <<  " было введено правильно и " << counterIncorrect << " — неправильно";
}*/

int main() {
	setlocale(LC_ALL, "Russian");
	int number;
	std::cout << "Введите число состоящие только из нулей и единиц: \n";
	std::cin >> number;

	bool found = false;
	while (number != 0 && !found) {
		
		found = number % 10 > 1;
		number /= 10;

	}

	if (found) {
		std::cout << "Состоит не только из нулей и единиц\n";
	} else {
		std::cout << "Состоит только из нулей и единиц\n";
	}
}