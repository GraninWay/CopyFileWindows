#include <iostream>
#include <string>

// Мои Header Files
#include "Interfaice.h"

std::string Interfaice() // Меню
{
	std::cout << "Введите 1 для ввода путей копирования и копирования" << std::endl;
	std::cout << "Введите 2 для копирования по умолчанию" << std::endl;
	std::cout << "Введите 3 для выхода" << std::endl;

	std::string number;
	std::cin >> number;

	return number;
}
