#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <iomanip>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		virtual ~ScalarConverter();
		ScalarConverter		&operator=(ScalarConverter const &copy);
	public:
		static void		converter(std::string literal);
};

#endif