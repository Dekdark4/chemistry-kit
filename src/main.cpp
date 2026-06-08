#include <iostream>
#include <string>
#include <iomanip>
#include "JsonParser.h"
#include "StringParser.h"

enum class MenuOptions
{
	EXIT = 0,
	THEORY = 1,
	SOLVE_EQUATION = 2,
	SHOW_PERIODIC_DATA = 3,
	CALCULATE_VALENCE = 4,
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
		std::cout << "Выбери опцию:  ";
		// ================================================

		// =============== ПОЛУЧЕНИЕ ВВОДА ================
		std::string option_srt{};
		std::getline(std::cin, option_srt);
		// ================================================



		// ================ ПАРСИНГ ВВОДА =================
		auto opt = Parser::try_parse_number<uint16_t>(option_srt);
		if (!opt || opt.value() < 0 || opt.value() >= static_cast<uint16_t>(MenuOptions::_LAST_))
		{
			system("cls");
			std::cerr << "Ошибка. [нажми enter]" << std::endl;
			std::cin.get();
			continue;
		}
		uint16_t option{ opt.value() };
		// ================================================


		//  = ПРЕОБРАЗОВАНИЕ В enum И ВЫПОЛНЕНИЕ ДЕЙСТВИЯ =
		MenuOptions choice = static_cast<MenuOptions>(option);

		switch (choice)
		{
		case MenuOptions::EXIT:
		{
			system("cls");
			std::cout << "Выход из программы. [нажми enter]" << std::endl;
			std::cin.get();
			return 0;
		}
		case MenuOptions::THEORY:
		{
			system("cls");
			std::cout << "Тут будет теория. [нажми enter]" << std::endl;
			std::cin.get();
			continue;
			break;
		}
		case MenuOptions::SOLVE_EQUATION:
		{
			system("cls");
			std::cout << "Тут будет решение уравнения. [нажми enter]" << std::endl;
			std::cin.get();
			continue;
			break;
		}
		case MenuOptions::SHOW_PERIODIC_DATA:
		{
			system("cls");
			std::cout << "Тут будет показана информация об элементах из таблицы Менделеева. [нажми enter]" << std::endl;
			std::cin.get();
			continue;
			break;
		}
		case MenuOptions::CALCULATE_VALENCE:
		{
			system("cls");
			std::cout << "Тут будет рассчёт валентностей. [нажми enter]" << std::endl;
			std::cin.get();
			continue;
			break;
		}
		default:
		{
			system("cls");
			std::cout << "Что-то пошло не так. [нажми enter]" << std::endl;
			std::cin.get();
			continue;
			break;
		}
		}
		// =================================================





		std::cin.get();
	}

	std::cin.get();
	return 0;
}