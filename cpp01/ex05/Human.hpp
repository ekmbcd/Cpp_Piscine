#include "Brain.hpp"

#ifndef HUMAN_HPP
#define HUMAN_HPP

class Human
{

private:
	const Brain _brain;
	
public:
	Human();
	~Human();

	std::string		identify(void);
	const Brain&	getBrain(void);
};

#endif
