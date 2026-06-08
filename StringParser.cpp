#include "StringParser.h"
#include <sstream>
#include <limits>

template<typename T>
std::optional<T> Parser::try_parse_number(const std::string& input)
{
	if (input.empty())
		return std::nullopt;
	
	std::istringstream iss{ input };
	long long temp{};
	if (!(iss >> temp))
		return std::nullopt;

	if (!(iss >> std::ws).eof())
		return std::nullopt;

	if (temp < std::numeric_limits<T>::min() || temp > std::numeric_limits<T>::max())
		return std::nullopt;

	return static_cast<T>(temp);
}