#include <iostream>
#include <string>

// ��� Header Files
#include "Interfaice.h"

std::string Interfaice() // ����
{
	std::cout << "������� 1 ��� ����� ����� ����������� � �����������" << std::endl;
	std::cout << "������� 2 ��� ����������� �� ���������" << std::endl;
	std::cout << "������� 3 ��� ������" << std::endl;

	std::string number;
	std::cin >> number;

	return number;
}
