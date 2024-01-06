//Задание 4. Банкомат — 2
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int value100 = 100;
	int value200 = 200;
	int value500 = 500;
	int value1000 = 1000;
	int value2000 = 2000;
	int value5000 = 5000;
	int withdraw;

	std::cout << "Введите сумму которую хотите снять\n";
	std::cin >> withdraw;

	if ((withdraw % 100 != 0)||(withdraw > 150000)) {
		
		if (withdraw > 150000) {

			std::cout << "Банкомат не может выдать за один раз более чем 150 000 рублей.";
		
		}else if (withdraw % 100 != 0) {
			
			std::cout << "Выдать сумму в виде " << withdraw << " невозможно, нет нужного номинала в банкомате, выберите другую сумму.";
		
		}
	
	}
	else
	{
		int v50 = withdraw / value5000;
		withdraw = withdraw % value5000;
		int v20 = withdraw / value2000;
		withdraw = withdraw % value2000;
		int v10 = withdraw / value1000;
		withdraw = withdraw % value1000;
		int v5 = withdraw / value500;
		withdraw = withdraw % value5000;
		int v2 = withdraw / value200;
		withdraw = withdraw % value200;
		int v1 = withdraw / value100;
		withdraw = withdraw % value100;

		if (v50 != 0)
			std::cout << "Купюр номиналом 5000: " << v50 << "\n";
		if (v20 != 0)
			std::cout << "Купюр номиналом 2000: " << v20 << "\n";
		if (v10 != 0)
			std::cout << "Купюр номиналом 1000: " << v10 << "\n";
		if (v5 != 0)
			std::cout << "Купюр номиналом 500: " << v5 << "\n";
		if (v2 != 0)
			std::cout << "Купюр номиналом 200: " << v2 << "\n";
		if (v1 != 0)
			std::cout << "Купюр номиналом 100: " << v1 << "\n";
	}

}