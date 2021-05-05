#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{

	SuperTrap	super("THE M-CO55U");

	super.rangedAttack("Skag");
	super.meleeAttack("Boss");
	super.vaulthunter_dot_exe("you");	
	ScavTrap	scav("Digimar10");
	super.ninjaShoebox(scav);
}