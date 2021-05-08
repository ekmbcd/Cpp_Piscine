#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	
	ISquad* vlc = new Squad;
	
	vlc->push(bob);
	vlc->push(jim);
	
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		
		cur->rangedAttack();
		cur->meleeAttack();
		
	}
	delete vlc;

	bob = new TacticalMarine;
	jim = new AssaultTerminator;
	
	Squad a;
	a.push(bob);
	std::cout << "a's battlecry: ";
	a.getUnit(0)->battleCry();
	
	Squad b(a);
	Squad c;
	c.push(jim);
	c = b;
	std::cout << "c's battlecry: ";
	c.getUnit(0)->battleCry();
	
	return 0;
}