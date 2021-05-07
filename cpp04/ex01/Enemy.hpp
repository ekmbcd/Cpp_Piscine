#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <Enemy.hpp>

class Enemy
{
protected:
	Enemy();
	std::string	_type;
	int			_hp;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	Enemy & operator = (Enemy const & src);
	virtual ~Enemy();

	std::string const getType() const;
	int getHP() const;

	virtual void takeDamage(int);
};

#endif
