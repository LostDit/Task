#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int K, N, counter = 1;

	std::cout << "Введите K и N\n";
	std::cin >> K >> N;
	double temp;
	while (N >= counter)
	{
		try {
			temp = pow(K, counter++);
			std::cout << temp << "\n";
		}
		catch(...)
		{
			std::cout << "Бро.\n";
			break;
		}
	}
}