#include <iostream>
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	
	int count = 0,a;
	std::string word;
	
	std::cout << "Введите то что вы хотели бы чтобы вам напомнили\n";
	std::getline(std::cin, word);
	
	std::cout << "Сколько раз вы хотели бы чтобы вам это вывели\n";
	std::cin >> a;

	while (count<a) {
		std::cout << word << "\n";
		count += 1;

	}


}