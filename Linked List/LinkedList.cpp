#include <iostream>
#include "ListOfTowns.h"
int main()
{
	TownList towns;
	towns.addFirstTown("Ipswich");
	towns.addTownAtEnd("Norwich");
	towns.addTownAtEnd("Cambridge");
	towns.addTownAtEnd("London");
	towns.listAllNames();
	TownList towns2;
	towns2.addTownAtStart("Liverpool");
	towns2.addTownAtStart("Ely");
	towns2.addTownAtStart("Manchester");
	towns2.listAllNames();
	system("PAUSE");
};