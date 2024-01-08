#include <iostream>
#include <algorithm>
#include <stdexcept>

int summ(int startPos, int endPos, unsigned long long number)
{
	for (int i = 0; i < startPos; i++)
		number /= 10;
	int sum = 0;
	for (int i = startPos; i < endPos; i++){
		sum += number % 10;
		number /= 10;
	}
		return sum;

};

int main() {
	
	setlocale(LC_ALL, "Russian");
	
	unsigned long long lint, tempLint;
		std::cout << "Введите номер билета\n";

		std::cin >> lint;
		tempLint = lint;
		int i;

		for (i = 0; tempLint > 0; i++)
			tempLint /= 10;
		if (i % 2 == 1)
			return 1;	
		else
			i /= 2;
		int summ1 = summ(0, i, lint), summ2 = summ(i, i*2, lint);
		std::cout << summ1 << "        " << summ2 << "\n";
		if (summ(0, i, lint) == summ(i, i * 2, lint))
			std::cout << "Билет счастливый!";
		else
			std::cout << "Повезёт в следующий раз!";

}