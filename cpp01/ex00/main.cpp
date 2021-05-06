#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony tom = Pony("Nobu", "black", 69);

	tom.run();
}

void ponyOnTheHeap()
{
	Pony *roach = new Pony("Roach", "brown", 42);

	roach->run();
	delete(roach);
}

int main()
{
	std::cout << std::endl << "\tPony on the stack:" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl  << "\tPony on the heap:" << std::endl;
	ponyOnTheHeap();
}
