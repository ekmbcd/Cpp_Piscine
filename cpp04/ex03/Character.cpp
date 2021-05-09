#include "Character.hpp"

Character::Character(std::string const & name) :
_name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character & src)
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

Character & Character::operator=(const Character & src)
{
	_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
		if (src._inventory[i] != NULL)
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return(*this);
}

std::string const & Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;

}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
