//������� 2.�������!
//��������� ���������� � ������������ �.� � ������� �� �������� ��� ��� ����� ���������
#include <iostream>
int main() 
{
	setlocale(LC_ALL, "Russian");
	
	//1-5, 8-10 ��������
	
	std::cout << "������� ���� ���\n";
	
	int day;
	std::cin >> day;
	

	if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10) || day % 7 == 6 || day % 7 == 0)
		
		std::cout << "��������";
	
	else
		
		std::cout << "�� ��������";
	
	
}