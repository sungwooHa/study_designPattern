/*MemberFilter*/

#pragma once

#include <functional>
#include <iostream>

using namespace std;
//Product
class MemberFilter
{
public:
	MemberFilter() = default;
	virtual ~MemberFilter() {};
	void SetLibraryFilter(std::function<void(void)> pFilterFunc)
	{
		m_pFilterLibrary = std::move(pFilterFunc);
	};
	void SetConstructionFilter(std::function<void(void)> pFilterFunc)
	{
		m_pFilterConstruction = std::move(pFilterFunc);
	};
	void SetComponentFIlter(std::function<void(void)> pFilterFunc)
	{
		m_pFilterComponent = std::move(pFilterFunc);
	};

	void ActivateLibraryFilter()
	{
		m_pFilterLibrary();
	}

	void ActivateConstructionFilter()
	{
		m_pFilterConstruction();
	}

	void ActivateComponentFilter()
	{
		m_pFilterComponent();
	}

private:
	std::function<void(void)>  m_pFilterLibrary;
	std::function<void(void)>  m_pFilterConstruction;
	std::function<void(void)>  m_pFilterComponent;
};
