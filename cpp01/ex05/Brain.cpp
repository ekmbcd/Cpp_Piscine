#include "Brain.hpp"

Brain::Brain(void)
{
	_iq = rand();
}

Brain::~Brain(void)
{

}

std::string	Brain::identify(void) const
{
	std::stringstream addr;
	addr << (void const *)this;
	return (addr.str());
}
