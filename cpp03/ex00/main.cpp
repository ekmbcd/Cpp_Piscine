#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("ANT-0N1N0");

	frag.meleeAttack("skag");
	frag.rangedAttack("badass");

	frag.takeDamage(60);
	frag.takeDamage(60);

	frag.beRepaired(60);
	frag.beRepaired(60);

	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
}