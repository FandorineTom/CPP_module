#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "ISpaceMraine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	bob->battleCry();
	std::cout << "\033[0;32mThe unit is created\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	ISpaceMarine* jim = new AssaultTerminator;
	jim->battleCry();
	std::cout << "\033[0;32mThe unit is created\033[0;0m\n";
	std::cout << "\t\t-------------\n";

	ISquad* vlc = new Squad;
	std::cout << "\033[0;33mThe squad with " << vlc->getCount() << " units is created\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	vlc->push(bob);
	vlc->push(jim);
	std::cout << "\033[0;32mPushed two units to the squad\033[0;0m\n";
	std::cout << "\033[0;33mThe squad now has " << vlc->getCount() << " units\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	ISpaceMarine* jack = new TacticalMarine;
	jack->battleCry();
	std::cout << "\033[0;32mThe new unit is created\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	vlc->push(jack);
	std::cout << "\033[0;32mPushed new unit to the squad\033[0;0m\n";
	std::cout << "\033[0;33mThe squad now has " << vlc->getCount() << " units\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	vlc->push(jack);
	std::cout << "\033[0;32mPushing the same unit to the squad\033[0;0m\n";
	std::cout << "\033[0;33mThe squad now has " << vlc->getCount() << " units\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	vlc->push(NULL);
	std::cout << "\033[0;32mPushed NULL to the squad\033[0;0m\n";
	std::cout << "\033[0;33mThe squad now has " << vlc->getCount() << " units\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	ISpaceMarine *nill = jim->clone();
	nill->battleCry();
	std::cout << "\033[0;32mThe clone of existing unit with name is created\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	vlc->push(nill);
	std::cout << "\033[0;32mPushed the clone to the squad\033[0;0m\n";
	std::cout << "\033[0;33mThe squad now has " << vlc->getCount() << " units\033[0;0m\n";
	std::cout << "\t\t-------------\n";
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}

	delete vlc;
	return 0;
}