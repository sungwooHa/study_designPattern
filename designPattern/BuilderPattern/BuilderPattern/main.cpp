/*main.cpp*/
#pragma once

#include <iostream>
#include "Director.h"
#include "FilterBuilder.h"

int main()
{

	std::shared_ptr<ConcFilterBuilder> pConcBuilder = std::make_shared< ConcFilterBuilder>();
	std::shared_ptr<RebarFilterBuilder> pRebarBuilder = std::make_shared< RebarFilterBuilder>();
	std::shared_ptr<StiffenerFilterBuilder> pStiffenerBuilder = std::make_shared< StiffenerFilterBuilder>();

	std::unique_ptr<Director> pConcDirector = std::make_unique<Director>(pConcBuilder);
	pConcDirector->ConstructionModeFilter();
	auto pConcFilter = pConcBuilder->GetMemberFilter();
	pConcFilter->ActivateLibraryFilter();
	pConcFilter->ActivateConstructionFilter();
	pConcFilter->ActivateComponentFilter();


	std::unique_ptr<Director> pRebarDirector = std::make_unique<Director>(pRebarBuilder);
	pRebarDirector->ConstructionModeFilter();
	auto pRebarFilter = pRebarBuilder->GetMemberFilter();
	pRebarFilter->ActivateLibraryFilter();
	pRebarFilter->ActivateConstructionFilter();
	pRebarFilter->ActivateComponentFilter();


	std::unique_ptr<Director> pStiffenerDirector = std::make_unique<Director>(pStiffenerBuilder);
	pStiffenerDirector->ConstructionModeFilter();
	auto pStiffenerFilter = pStiffenerBuilder->GetMemberFilter();
	pStiffenerFilter->ActivateLibraryFilter();
	pStiffenerFilter->ActivateConstructionFilter();
	pStiffenerFilter->ActivateComponentFilter();

}