//������� 5. ���������� ������ ��� ������
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	int m, n, k;


	std::cout << "������� ������, ������, ������� ������ �������\n";
	std::cin >> a >> b >> c;

	std::cout << "������� ������, ������, ������� ������ �������\n";
	std::cin >> m >> n >> k;

	if ((a<m && b>n && c > k) || (a > m && b < n && c < k) || (a<m && b>n && c < k) || (a > m && b<n && c > k) || (a > m && b > n && c < k) || (a < m && b<n && c > k)) {

		std::cout << "������� �� ����������� � ������\n";

	}else if (a == 0 || b == 0 || c == 0 || m == 0 || n == 0 || k == 0) {

		std::cout << "�� ������ ���� 0, �.� ��� �� �������\n";

	}else {
		
		std::cout << "������� ����� ����������� ���� � �����\n";
	
	}

}