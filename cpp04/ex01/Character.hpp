#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	_name;
	int			_ap;
	AWeapon*	_weapon;
	Character();

public:
	Character(std::string const & name);
	Character(Character const & src);
	Character & operator = (Character const & src);
	virtual ~Character();

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);

	std::string const getName() const;
	int getAP() const;
	AWeapon* getWeapon() const;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);


#endif