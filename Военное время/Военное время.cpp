// Военное время.
#include <iostream>
#include <string>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");

	std::string input, output = "";
	std::cin >> input;

	for (int i = input.length() - 1; i > -1; i--)
		output += input[i];
   std::cout << output << "\n";
}