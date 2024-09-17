#include <scalar.hpp>

int main (int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Usage: ./scalar [literal]" << std::endl;
		return 1;
	}
	Scalar scalar;
	std::string literal = argv[1];
	scalar.converter(literal);
	return 0;
}