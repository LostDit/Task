//Задание 5. Усложнение задачи про кирпич
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	int m, n, k;


	std::cout << "Введите высоту, ширину, глубину первой коробки\n";
	std::cin >> a >> b >> c;

	std::cout << "Введите высоту, ширину, глубину второй коробки\n";
	std::cin >> m >> n >> k;

	if ((a<m && b>n && c > k) || (a > m && b < n && c < k) || (a<m && b>n && c < k) || (a > m && b<n && c > k) || (a > m && b > n && c < k) || (a < m && b<n && c > k)) {

		std::cout << "Коробка не поместиться в другую\n";

	}else if (a == 0 || b == 0 || c == 0 || m == 0 || n == 0 || k == 0) {

		std::cout << "Не должно быть 0, т.к это не коробка\n";

	}else {
		
		std::cout << "Коробки могут поместиться друг в друга\n";
	
	}

}