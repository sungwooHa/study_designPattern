#pragma once
#include <iostream>
#include <vector>
#include "Soldier.h"

using namespace std;

int main()
{
	std::cout << "Comparison of military equipment by country" << endl;

	std::vector<std::unique_ptr<Soldier>> soldiers(3);

	soldiers[0] = std::make_unique<SwitzerlandSoldier>();
	soldiers[1] = std::make_unique<GermanySoldier>();
	soldiers[2] = std::make_unique<BritishSoldier>();


	for (unsigned int i = 0; i < soldiers.size(); ++i)
	{
		cout << "Nationality : " << soldiers[i]->GetNationality().c_str() << endl;
		cout << "Sword : " << soldiers[i]->Attack()->GetSword() << endl;
		cout << "Shield : " << soldiers[i]->Defend()->GetShield() << endl;
		cout << endl;
	}


	return 0;
}
