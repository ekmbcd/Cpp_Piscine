#ifndef STRONG_PEON_HPP
#define STRONG_PEON_HPP

#include <iostream>
#include "Victim.hpp"

class StrongPeon : public Victim
{
public:
	StrongPeon(std::string const & name);
	~StrongPeon();

	void getPolymorphed() const;

private:
	StrongPeon();

};

#endif
