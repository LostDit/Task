//������� 3. ������� � ����������
//��������� ���������� � ������������ �.� � ������� �� �������� ��� ��� ����� ���������
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");

	//1-5, 8-10 ��������

	int inputday;

	int dayplus;

	std::cout << "������� ���� ��� � �������� ������ ������\n";
	std::cin >> inputday;

	std::cout << "������� ������� ���� ���������� �� ��� �������� �� �����\n";
	std::cin >> dayplus;


	int b = inputday + dayplus;

	if (b < 1 || b > 31) {

		std::cout << "��� ������ ��� ���, �������� ����� ������� ���� � �������� ������ ������\n";

	}
	else if ((b >= 1 && b <= 10) || b % 7 == 6 || b % 7 == 0) {

		std::cout << "��������";

	}else {
	
		std::cout << "�� ��������";
		
	}
}