#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	AMateria() {}
	unsigned int _xp;
	std::string _type;
	void increaseXP();

public:
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	AMateria & operator = (AMateria const & src);
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};


#endif