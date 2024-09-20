#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>


class Data {
	private:
		std::string _data;
	public:
		Data(void);
		Data(Data &copy);
		Data(std::string data) : _data(data) {}
		Data &operator=(Data const &copy);
		std::string getData(void) const { return this->_data; }
		~Data();
};

class Serializer {
	private:
		Serializer();
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &copy);
	public:
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif