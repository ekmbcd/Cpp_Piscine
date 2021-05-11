#include "serialization.hpp"

int main()
{
	void * serialized = serialize();
	Data * data = deserialize(serialized);
	std::cout << "string one: " <<data->one << std::endl;
	std::cout << "int: " << data->n << std::endl;
	std::cout << "string two: " << data->two << std::endl;

	delete data;
}