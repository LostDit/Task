//Задание 2.Майские!
//Программа начинается с понедельника т.к в условии не сказанно что год нужно учитывать
#include <iostream>
int main() 
{
	setlocale(LC_ALL, "Russian");
	
	//1-5, 8-10 выходные
	
	std::cout << "Введите день мая\n";
	
	int day;
	std::cin >> day;
	

	if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || day % 7 == 6 || day % 7 == 0)
		
		std::cout << "Выходной";
	
	else
		
		std::cout << "Не выходной";
	
	
}