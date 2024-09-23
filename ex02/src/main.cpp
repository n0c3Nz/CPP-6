#include "base.hpp"

int main(void)
{
	// Genero un puntero a Base de forma aleatoria (A, B o C)
	Base *base = Base::generate();
	// Identifico el tipo de la instancia de Base a la que apunta base
	base->identify(base);
	Base &baseRef = *base;
	// Identifico el tipo de la instancia de Base a la que referencia baseRef
	base->identify(baseRef);
	// Libero la memoria reservada para base
	delete base;
	return 0;
}