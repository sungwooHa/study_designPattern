/*Director*/

#pragma once

#include "FilterBuilder.h"

class Director
{
public:
	Director() {};
	Director(std::shared_ptr<FilterBuilder> filterBuilder)
	{
		m_pFilterBuilder = filterBuilder;
	}
	virtual ~Director() {};

	void ConstructionModeFilter()
	{
		m_pFilterBuilder->BulidLibraryFilter();
		m_pFilterBuilder->BulidComponentFilter();
		m_pFilterBuilder->BulidConstructionFilter();
	}

private:
	std::shared_ptr<FilterBuilder> m_pFilterBuilder;
};