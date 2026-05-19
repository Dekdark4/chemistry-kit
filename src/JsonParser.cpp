#include "JsonParser.h"
#include <iostream>

std::optional<std::string> JsonParser::JsonParser::find_quoted_text()
{
    // Проверяем, не слишком ли короткая строка
    if (text.size() < 2)
    {
        std::cerr << "Строка слишком короткая" << std::endl;
        return std::nullopt;
    }

    // Проверяем, действительно ли строка начинается с "
    if (text.front() != '"')
    {
        std::cerr << "Строка начинается не с кавычки." << std::endl;
        return std::nullopt;
    }

    // Проверяем, действительно ли строка заканчивается на "
    if (text.back() != '"')
    {
        std::cerr << "Строка заканчивается не кавычкой." << std::endl;
        return std::nullopt;
    }

    // Проходимся по строке и возвращаем строку без кавычек
    std::string unquoted_text{};
    for (auto i{ 1 }; i < text.size() - 1; ++i)
    {
        unquoted_text += text[i];
    }

    // Единственно верный исход
    return unquoted_text;
}
