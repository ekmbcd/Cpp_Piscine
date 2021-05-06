#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie zuzu("Zuzu", "Stack");
	ZombieEvent event;
	Zombie *zaza;

	event.setZombieType("Heap");
	zuzu.announce();
	zaza = event.randomChump();
	delete(zaza);
}
