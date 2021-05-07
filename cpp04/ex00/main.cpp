#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"
#include "StrongPeon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	StrongPeon josh("Josh");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(josh);
	return 0;
}
