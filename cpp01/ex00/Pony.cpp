#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int speed) : _name(name), _color(color), _speed(speed)
{
	std::cout << name << " is born." << std::endl;
}

void Pony::run(void)
{
	std::cout << _name << ", the " << _color << " pony, runs at " << _speed << " km/h." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << _name << " died." << std::endl;
}
