#include "StrongPeon.hpp"

StrongPeon::StrongPeon(std::string const & name)
{
	_name = name;
	std::cout << "MUSCLE!" << std::endl;
}

StrongPeon::~StrongPeon()
{
	std::cout << "NOOOO!" << std::endl;
}

StrongPeon::StrongPeon() : Victim()
{

}

void StrongPeon::getPolymorphed() const
{
	std::cout << _name << " is too strong for weak magic!" << std::endl;
}
