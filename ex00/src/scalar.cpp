#include <scalar.hpp>

// Cannonical form
ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &copy) {
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy) {
	if (this != &copy) {
		*this = copy;
	}
	return *this;
}

ScalarConverter::~ScalarConverter() {}

// Member functions

void	ScalarConverter::converter(std::string literal) {
	try {
		if (std::stoi(literal) < 127 && std::stoi(literal) > 32) {
			std::cout << "char: '" << static_cast<char>(std::stoi(literal)) << "'"<< std::endl;
		}
		else
			std::cout << "char: Non displayable" << std::endl;
	} catch (std::exception &e) {
		std::cout << "char: impossible" << std::endl;
	}
	try {
		std::cout << "int: " << std::stoi(literal) << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
	try {
		std::cout << "float: " << std::fixed << std::setprecision(1) << std::stof(literal) << "f" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
	try {
		std::cout << "double: " << std::stod(literal) << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}
