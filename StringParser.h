#pragma once
#include <optional>
#include <string>

namespace Parser
{
	template<typename T>
	std::optional<T> try_parse_number(const std::string& input);
}