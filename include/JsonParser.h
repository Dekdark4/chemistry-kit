#pragma once
#include <string>
#include <optional>

namespace JsonParser
{
	class JsonParser
	{
	private:
		std::string text;
	public:
		JsonParser() = default;
		JsonParser(std::string text) : text{ std::move(text) } {};

		std::optional<std::string> find_quoted_text();
	};
}