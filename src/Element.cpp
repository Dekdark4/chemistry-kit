#include "Element.h"
#include <iostream>

void Elements::Element::print()
{
	std::cout << "Атомный номер: " << atomic_number << std::endl;
	std::cout << "Международный символ : " << symbol << std::endl;
	std::cout << "Название (англ.): " << name_en << std::endl;
	std::cout << "Название (рус.): " << name_ru << std::endl;
	std::cout << "Атомная масса: " << atomic_mass << std::endl;
	std::cout << "Номер периода: " << period << std::endl;
	std::cout << "Номер группы: " << group << std::endl;
}