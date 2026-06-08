#include <iostream>
#include <string>
#include <iomanip>
#include "JsonParser.h"

enum class MenuOptions
{
	EXIT = 0,
	THEORY = 1,
	SOLVE_EQUATION = 2,
	_LAST_
};

int main()
{
	setlocale(LC_ALL, "rus");

	while (true)
	{
		// ================ ОТРИСОВКА МЕНЮ ================
		system("cls");
		std::cout << "===== ГЛАВНОЕ МЕНЮ =====" << std::endl;
		std::cout << std::setw(22) << std::left << "Показать теорию:" << std::setw(5) << std::right << "[1]" << std::endl;
		std::cout << std::setw(22) << std::left << "Решить уравнение:" << std::setw(5) << std::right << "[2]" << std::endl;
		std::cout << std::setw(22) << std::left << "Выйти из программы:" << std::setw(5) << std::right << "[0]" << std::endl;
		std::cout << "Выберите опцию:  ";
		// ================================================

		// =============== ПОЛУЧЕНИЕ ВВОДА ================
		std::string option_srt{};
		std::getline(std::cin, option_srt);
		// ================================================

		std::cin.get();
	}

	std::cin.get();
	return 0;
}