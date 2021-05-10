
#include "AWeapon.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "OpSword.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	b = new SuperMutant();
	AWeapon * op = new OpSword();
	me->equip(op);
	me->attack(b);
	me->attack(b);
	me->recoverAP();
	me->attack(b);

	delete me;
	delete pr;
	delete pf;
	delete op;
	return 0;
	}