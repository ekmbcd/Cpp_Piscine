#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) :
_type(type), _hp(hp)
{

}

std::string const Enemy::getType() const
{
	return(_type);
}

int Enemy::getHP() const
{
	return(_hp);
}

Enemy & Enemy::operator = (Enemy const & src)
{
	_type = src._type;
	_hp = src._hp;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}

