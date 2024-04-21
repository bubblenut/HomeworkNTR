#include <iostream>
#include <vector>
#include <memory>
#include <array>
#include <variant>
#include <unordered_map>

struct OpeningBracket {};

struct ClosingBracket {};

struct Number {
	int value;
};
struct UnknownToken {
	std::string value;
};

struct Plus {};
struct Minus {};
struct Multiply {};
struct Modulo {};
struct Divide {};
struct Comma {};

struct MinToken {};
struct AbsToken {};
struct MaxToken {};
struct SqrToken {};

using Token = std::variant<OpeningBracket, ClosingBracket, Number, UnknownToken, Plus, Minus, Multiply, Divide, Modulo, Comma, MinToken, MaxToken, AbsToken, SqrToken>;

// Быстрый доступ к символам
const std::unordered_map<char, Token> kSymbol2Token {
	{'+', Plus{}},
	{'-', Minus{}},
	{'*', Multiply{}},
	{'/', Divide{}},
	{'%', Modulo{}},
	{',', Comma{}},
	{'(', OpeningBracket{}},
	{')', ClosingBracket{}}
};

// Быстрый доступ к функциям
const std::unordered_map<std::string, Token> kString2Token {
	{"min", MinToken{}},
	{"max", MaxToken{}},
	{"abs", AbsToken{}},
	{"sqr", SqrToken{}}
};

int ToDigit(unsigned char symbol) {
  return symbol - '0';
}

// Тут парсим число
Number ParseNumber(const std::string& input, size_t& pos) {
	int value = 0;
	auto symbol = static_cast<unsigned char>(input[pos]);
	while (std::isdigit(symbol)) {
		value = value * 10 + ToDigit(symbol);
		if (pos == input.size() - 1) {
			++pos;
			break;
		}
		symbol = static_cast<unsigned char>(input[++pos]);
	}
	return Number{value};
}

// Тут парсим текст, он либо функция либо неизвестный токен
Token ParseFunction(const std::string& input, size_t& pos) {
	std::string value;
	auto symbol = static_cast<unsigned char>(input[pos]);
	while (std::isalpha(symbol)) {
		value.push_back(symbol);
		if (pos == input.size() - 1) {
			++pos;
			break;
		}
		symbol = static_cast<unsigned char>(input[++pos]);
	}
	if (auto it = kString2Token.find(value); it != kString2Token.end()) {
		return  it->second;
	} else {
		return UnknownToken{value};
	}
}

std::vector<Token> Tokenize(const std::string& input) {
	std::vector<Token> tokens;
	const size_t size = input.size();
	size_t pos = 0;
	while (pos < size) {
		//std::cout << pos << '\n';
		const auto symbol = static_cast<unsigned char>(input[pos]);
		if (std::isspace(symbol)) {
			++pos;
		} else if (std::isdigit(symbol)) {
			tokens.emplace_back(ParseNumber(input, pos));
		} else if (auto it = kSymbol2Token.find(symbol); it != kSymbol2Token.end()) {
			tokens.emplace_back(it->second);
			++pos;
		} else if (std::isalpha(symbol)) {
			tokens.emplace_back(ParseFunction(input, pos));
		} else {
			std::string unknownSymbol;
			unknownSymbol.push_back(symbol);
			tokens.emplace_back(UnknownToken{unknownSymbol});
			++pos;
		}
	}
	return tokens;
}



// Функция для проверки массива токенов
void printToken(const Token& token) {
	if (std::holds_alternative<OpeningBracket>(token)) {
			std::cout << "OpeningBracket\n";
	} else if (std::holds_alternative<ClosingBracket>(token)) {
			std::cout << "ClosingBracket\n";
	} else if (std::holds_alternative<Number>(token)) {
			std::cout << "Number " << std::get<Number>(token).value << '\n';
	} else if (std::holds_alternative<UnknownToken>(token)) {
			std::cout << "UnknownToken " << std::get<UnknownToken>(token).value << '\n';
	} else if (std::holds_alternative<Plus>(token)) {
			std::cout << "Plus\n";
	} else if (std::holds_alternative<Minus>(token)) {
			std::cout << "Minus\n";
	} else if (std::holds_alternative<Multiply>(token)) {
			std::cout << "Multiply\n";
	} else if (std::holds_alternative<Divide>(token)) {
			std::cout << "Divide\n";
	} else if (std::holds_alternative<Modulo>(token)) {
			std::cout << "Modulo\n";
	} else if (std::holds_alternative<Comma>(token)) {
			std::cout << "Comma\n";
	} else if (std::holds_alternative<MinToken>(token)) {
			std::cout << "MinToken\n";
	} else if (std::holds_alternative<MaxToken>(token)) {
			std::cout << "MaxToken\n";
	} else if (std::holds_alternative<AbsToken>(token)) {
			std::cout << "AbsToken\n";
	} else if (std::holds_alternative<SqrToken>(token)) {
			std::cout << "SqrToken\n";
	}
}

int main() {
	std::string input = "122& + 1398 + max(1, 5) + (0 * 5) % (abs(HELP IM STUCK IN STRING))";
	auto tokens = Tokenize(input);

	for(auto& t : tokens) {
		printToken(t);
	}
}