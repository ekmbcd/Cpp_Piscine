#include "serialization.hpp"

void * serialize(void)
{
	Data * tmp = new Data;
	std::string words[] = {
		"ciao ",
		"arrivederci ",
		"cane ",
		"gatto ",
		"pony ",
		"granchio ",
		"Umberto ",
		"Mario ",
		"Flavio "
	};

	srand(time(0));
	tmp->one = words[rand() % 9] + words[rand() % 9];
	tmp->n = rand() % 200000;
	tmp->two = words[rand() % 9] + words[rand() % 9];

	return (reinterpret_cast<void *>(tmp));
}

Data * deserialize(void * raw)
{
	return (reinterpret_cast<Data *>(raw));
}