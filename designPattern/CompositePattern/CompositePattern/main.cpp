#pragma once

#include "phase.h"

int main()
{
	std::shared_ptr<GroupPhase> groupPhase1 = std::make_shared<GroupPhase>("Parents GroupPhase");

	groupPhase1->Add(std::make_shared<GroupPhase>("groupPhase"));
	groupPhase1->Add(std::make_shared<ScalarPhase>("SclarPhase"));

	std::shared_ptr<GroupPhase> groupPhase2 = std::make_shared<GroupPhase>("GrandParents GroupPhase");

	groupPhase2->Add(groupPhase1);

	groupPhase2->ShowTree();
}