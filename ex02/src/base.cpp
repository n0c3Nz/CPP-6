#include <base.hpp>

Base::~Base() { }

Base *Base::generate(void) {
	std::srand(std::time(0)); // Inicializa la semilla para rand
    int randomValue = 1 + (std::rand() % 3); // Genera un número aleatorio entre 1 y 3
	switch (randomValue) {
        case 1:
            return new A();
        case 2:
            return new B();
        case 3:
            return new C();
        default:
            return nullptr;
    }
}

void Base::identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void Base::identify(Base &p) {
	identify(&p);
}