#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"
#include "Farmer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peasant mark("Mark");
	Farmer jhon("Jhon");
	std::cout << robert << jim << joe << mark << jhon;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(mark);
	robert.polymorph(jhon);
	return 0;
}