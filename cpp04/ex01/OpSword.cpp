#include "OpSword.hpp"

OpSword::~OpSword()
{

}

OpSword::OpSword() : AWeapon("Overpowered Sword", 15, 100)
{

}

void OpSword::attack() const
{
	std::cout << "* TZINNN *" << std::endl;
}
