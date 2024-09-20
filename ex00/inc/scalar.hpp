#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Scalar {
	private:
		Scalar();
		Scalar(Scalar const &copy);
		virtual ~Scalar();
		Scalar		&operator=(Scalar const &copy);
	public:
		static void		converter(std::string literal);
};

#endif