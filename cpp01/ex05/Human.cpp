#include "Human.hpp"

Human::Human(void) 
{ 

}

Human::~Human(void) 
{ 

}

std::string	Human::identify(void)
{
	return (_brain.identify());
}

const Brain& Human::getBrain(void)
{
	return (_brain);
}