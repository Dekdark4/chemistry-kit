#pragma once
#include <cstdint>
#include <string>

namespace Elements {

	struct Element
	{
		// ПОЛЯ
		uint16_t atomic_number{};
		std::string symbol{};
		std::string name_en{};
		std::string name_ru{};
		double atomic_mass{};
		uint16_t period{};
		uint16_t group{};

		// КОНСТРУКТОРЫ
		Element() = default;
		Element(uint16_t atomic_number, std::string symbol, std::string name_en, std::string name_ru, double atomic_mass, uint16_t period, uint16_t group) :
			atomic_number{ atomic_number },
			symbol{ std::move(symbol) },
			name_en{ std::move(name_en) },
			name_ru{ std::move(name_ru) },
			atomic_mass( atomic_mass ),
			period(period ),
			group (group) {};

		// МЕТОДЫ
		void print();
	};

}