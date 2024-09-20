#include <serializer.hpp>

int main (int argc, char **argv)
{
	Data data;
	std::cout << "- - - - - - - FIRST CASE - - - - - - -" << std::endl;
	std::cout << "Data: " << &data << std::endl;
	std::cout << "Content: " << data.getData() << std::endl;
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Raw: " << raw << std::endl;
	Data *ptr = Serializer::deserialize(raw);
	std::cout << "Data: " << ptr << std::endl;
	std::cout << "- - - - - - - SECOND CASE - - - - - - -" << std::endl;
	Data data2("Hello");
	std::cout << "Data: " << &data2 << std::endl;
	std::cout << "Content: " << data2.getData() << std::endl;
	uintptr_t raw2 = Serializer::serialize(&data2);
	std::cout << "Raw: " << raw2 << std::endl;
	Data *ptr2 = Serializer::deserialize(raw2);
	std::cout << "Data: " << ptr2 << std::endl;
	return 0;
}