#pragma once
#include <vector>
#include "Member.h"


int main()
{
	std::vector<std::unique_ptr<Member>> members;

	members.emplace_back(std::make_unique<Concrete>(std::make_unique<ConcreteQuantity>()));
	members.emplace_back(std::make_unique<Stiffener>(std::make_unique<StiffenerQuantity>()));

	for (unsigned int i = 0; i < members.size(); ++i)
		members[i]->ActivateQuantity();

	return 0;
}