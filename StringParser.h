#pragma once
#include <optional>
#include <string>
#include <cstdint>

namespace Parser
{
	template<typename T>
	std::optional<T> try_parse_number(const std::string& input);
}