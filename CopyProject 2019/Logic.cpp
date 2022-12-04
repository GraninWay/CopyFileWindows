#include <iostream>
#include <string>
#include <filesystem> // C++17 (Language Standard)
#include <Windows.h>

// ��� Header Files
#include "Logic.h"
#include "Interfaice.h"

namespace fs = std::filesystem;

void Logic()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string pathFrom("D:/file"); // ���� �� ��������� �� ���� ����������
	std::string pathTo("D:/���� D/file"); // ���� �� ��������� ���� ����������

	std::string interfaice;
	std::string pathFromNew; // ����������� �� �����
	std::string pathToNew; // ����������� ���� �����

	while ((interfaice = Interfaice()) != "3")
	{
		if (interfaice == "1") // ����� ���� �����������
		{
			std::cout << "������� ����� ���� �� ���� ����������" << std::endl;
			std::cin >> pathFromNew;

			std::cout << "������� ����� ���� ���� ����������" << std::endl;
			std::cin >> pathToNew;

			fs::copy(pathFromNew, pathToNew, fs::copy_options::overwrite_existing);

			std::cout << "������ ���� ������������ �� " << pathFromNew << " � " << pathToNew << std::endl;
		}
		else if (interfaice == "2") // ����������� �� "D:/file" � "D:/���� D/file"
		{
			fs::copy(pathFrom, pathTo, fs::copy_options::overwrite_existing);
			std::cout << "������ ���� ������������ �� " << pathFrom << " � " << pathTo << std::endl;
			std::cout << std::endl;
		}
	}
}
