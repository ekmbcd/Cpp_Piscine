#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("ANT-0N1N0");
	ScavTrap	scav("Digimar10");

	frag.meleeAttack("skag");
	frag.rangedAttack("badass");
	
	scav.meleeAttack("wall");
	scav.rangedAttack("pidgeon");

	frag.takeDamage(60);
	frag.takeDamage(60);
	frag.beRepaired(60);
	frag.beRepaired(60);

	scav.takeDamage(60);
	scav.takeDamage(60);
	scav.beRepaired(60);
	scav.beRepaired(60);

	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");
	frag.vaulthunter_dot_exe("Jack");

	scav.challengeNewcomer("Lilith");
	scav.challengeNewcomer("Lilith");
	scav.challengeNewcomer("Lilith");

}