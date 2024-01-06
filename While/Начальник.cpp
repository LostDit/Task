#include <iostream>
#include <string>
#include <stdio.h>

int main()
{	
	std::string answer;

		std::cout << "Have you completed the tasks?\n";
		std::getline(std::cin, answer);	
				
	while (answer != "Yes, of course") {
		
		std::cout << "Have you completed the tasks?\n";
		std::getline(std::cin, answer);
					
		}
		std::cout << "Great!\n";
}