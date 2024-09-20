#include <serializer.hpp>

Serializer::Serializer() {}

Serializer::Serializer(Serializer const &copy) {
	(void)copy;
}

Serializer &Serializer::operator=(Serializer const &copy) {
	(void)copy;
	return *this;
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

Data::Data(void) {
	this->_data = "Default";
}

Data::Data(Data &copy) {
	this->_data = copy._data;
}

Data &Data::operator=(Data const &copy) {
	this->_data = copy._data;
	return *this;
}

Data::~Data() {}