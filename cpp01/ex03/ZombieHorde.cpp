#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _n(N)
{
	srand(time(0));
	std::string names[] = {"Cristiano", "Mario", "Umberto", "Mattia", "Flavio", "Elena", "Andrea", "Alex", "Alessandro"};
	int r;
	_zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		r = rand() % sizeof(names) / sizeof (std::string);
		_zombies[i].setName(names[r]);
		_zombies[i].setType("Horde");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] _zombies;
}

void ZombieHorde::announce() const
{
	for (int i = 0; i < _n; i++)
		_zombies[i].announce();
}
