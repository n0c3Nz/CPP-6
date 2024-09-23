#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib> // Para rand y srand
#include <ctime>   // Para time
#include <iostream>

class Base {
	public:
		virtual ~Base();
		static Base *generate(void);
		void identify(Base* p);
		void identify(Base &p);
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};


#endif