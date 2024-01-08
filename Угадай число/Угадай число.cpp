//Задание 8. Угадай число
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int	indexLeft = 0, indexRight = 63;			
	bool  isFinished = false;
	for (int i = 0; i < 6; i ++) {
		
		cout << "Ваше число больше, чем " << (indexLeft + indexRight) / 2 << "? " << "границы поиска: " << indexLeft << " " << indexRight << "\n";
		bool isTrue;
		cin >> isTrue;
		if (isTrue)
		{
			indexLeft = (indexLeft + indexRight) / 2 + 1;
		}
		else
		{
			indexRight = (indexLeft + indexRight) / 2;
		}
	}
	cout << (indexLeft + indexRight) / 2 << " - ваше число?\n";
}		//Выполнено бинарным поиском