#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << _name << " rises from the dead!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " died... again?" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
