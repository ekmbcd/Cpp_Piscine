#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	Character() {}
	std::string _name;
	AMateria * _inventory[4];

public:
	Character(std::string const & name);
	Character(Character const & src);
	Character & operator = (Character const & src);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif