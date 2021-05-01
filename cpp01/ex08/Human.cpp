#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << target << " was hit with a melee attack." << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << target << " was hit with a ranged attack." << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << target << " was hit with an intimidating shout." << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	std::string actions[] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};
	void (Human::*methods[])(std::string const & target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (action_name == actions[i])
		{
			(this->*(methods[i]))(target);
			break;
		}
	}
}