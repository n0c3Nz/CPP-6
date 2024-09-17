#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Scalar {

public:
	Scalar();
	Scalar(Scalar const &copy);
	virtual ~Scalar();
	Scalar		&operator=(Scalar const &copy);
	void		converter(std::string literal) const;
};

#endif