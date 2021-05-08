#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int dmg)
{
	if (dmg < 3)
		return ;
	_hp -= dmg - 3;
	if (_hp < 0)
		_hp = 0;
}
