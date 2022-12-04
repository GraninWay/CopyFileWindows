#include <iostream>
#include <string>
#include <filesystem> // C++17 (Language Standard)
#include <Windows.h>

// Мои Header Files
#include "Logic.h"
#include "Interfaice.h"

namespace fs = std::filesystem;

void Logic()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string pathFrom("D:/file"); // путь по умолчанию от куда копировать
	std::string pathTo("D:/ДИСК D/file"); // путь по умолчанию куда копировать

	std::string interfaice;
	std::string pathFromNew; // Копирование от новое
	std::string pathToNew; // Копирование куда новое

	while ((interfaice = Interfaice()) != "3")
	{
		if (interfaice == "1") // Новый путь копирования
		{
			std::cout << "Введите новый путь от куда копировать" << std::endl;
			std::cin >> pathFromNew;

			std::cout << "Введите новый путь куда копировать" << std::endl;
			std::cin >> pathToNew;

			fs::copy(pathFromNew, pathToNew, fs::copy_options::overwrite_existing);

			std::cout << "Данные были скопированны из " << pathFromNew << " в " << pathToNew << std::endl;
		}
		else if (interfaice == "2") // копирование из "D:/file" в "D:/ДИСК D/file"
		{
			fs::copy(pathFrom, pathTo, fs::copy_options::overwrite_existing);
			std::cout << "Данные были скопированны из " << pathFrom << " в " << pathTo << std::endl;
			std::cout << std::endl;
		}
	}
}
