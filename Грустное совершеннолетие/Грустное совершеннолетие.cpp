//������� 6. �������� ���������������
#include <iostream>

int main()
{
	setlocale (LC_ALL, "Russian");
	int day, month, year;
	int day2, month2, year2;

	std::cout << "������� ����, ����� ��� � ������ ������: \n";
	std::cin >> day >> month >> year;
	
	std::cout << "������� ���� �������� ��� ����� �������� ��������: \n";
	std::cin >> day2 >> month2 >> year2;

		
	int a = day - day2; //������� � ���
	
	int b = month - month2; // ������� � ������
	
	int c = year - year2; //������� � �����
		
		std::cout << "------������� ��� ��������------\n";
	
	if ((day > 31 || 1 > day) || (day2 > 31 || 1 > day2)) {

		std::cout << "�� ����� ������������ ����\n";

	}else if ((1 > month || month > 12) || (1 > month2 || month2 > 12)) {

		std::cout << "�� ����� ������������ �����\n";

	}else if (year < 0 || year2 < 0) {
	
		std::cout << "�� ����� ����������� ���\n";
	
	}else if (((b <= 0 && a < 1) && c < 18) || (b < 0 && c <= 18 )||(b == 0 && a > 1 && c == 18 )) {
		
		std::cout << "������ ��������� �������� \n";

	}else {

		std::cout << "����� ��������� �������� \n";
	}
}