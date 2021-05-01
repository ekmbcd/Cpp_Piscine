#include <iostream>
#include <string>
#include <sstream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{

private:
	unsigned int iq;
	
public:
	Brain();
	~Brain();

	std::string	identify(void) const;
};

#endif
