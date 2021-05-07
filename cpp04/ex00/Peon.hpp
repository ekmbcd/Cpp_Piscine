#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string const & name);
	~Peon();

	void getPolymorphed() const;

private:
	Peon();

};

#endif
