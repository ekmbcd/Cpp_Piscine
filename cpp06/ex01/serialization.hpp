#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>

struct Data
{
public:
	std::string one;
	int	n;
	std::string two;
};

void * serialize(void);
Data * deserialize(void * raw);

#endif