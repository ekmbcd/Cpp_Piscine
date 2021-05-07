#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
public:

	Victim(std::string const & name);
	Victim(Victim const & src);
	Victim & operator = (Victim const & src);
	~Victim();

	std::string const getName() const;
	void virtual getPolymorphed() const;

protected:
	std::string	_name;
	Victim();
private:

};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
