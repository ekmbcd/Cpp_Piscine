#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
private:

public:
	virtual ~Base() {}
};

void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

#endif