#pragma once
/*FilterBuilder*/
#pragma once
#include "MemberFilter.h"

class FilterBuilder
{
public:
	FilterBuilder() {
		m_pFilter = std::make_unique<MemberFilter>();
	};
	virtual ~FilterBuilder() {};

	virtual void BulidLibraryFilter() = 0;
	virtual void BulidConstructionFilter() = 0;
	virtual	void BulidComponentFilter() = 0;

	std::shared_ptr<MemberFilter> GetMemberFilter()
	{
		return std::move(m_pFilter);
	}

	void GetResult()
	{
		m_pFilter->ActivateLibraryFilter();
		m_pFilter->ActivateConstructionFilter();
		m_pFilter->ActivateComponentFilter();
	}

protected:
	std::unique_ptr<MemberFilter> m_pFilter;
};


class ConcFilterBuilder : public FilterBuilder
{
public:
	ConcFilterBuilder() = default;
	virtual ~ConcFilterBuilder() {};

	virtual void BulidLibraryFilter()		override
	{
		m_pFilter->SetLibraryFilter([&]()
			{
				std::cout << "Concrete - Library Filter" << std::endl;
			});
	};
	virtual void BulidConstructionFilter()	override
	{
		m_pFilter->SetConstructionFilter([&]()
			{
				std::cout << "Concrete - Construction Filter" << std::endl;
			});
	};
	virtual	void BulidComponentFilter()		override
	{
		m_pFilter->SetComponentFIlter([&]()
			{
				std::cout << "Concrete - Component Filter" << std::endl;
			});
	};
};

class RebarFilterBuilder : public FilterBuilder
{
public:
	RebarFilterBuilder() = default;
	virtual ~RebarFilterBuilder() {};

	virtual void BulidLibraryFilter()		override
	{
		m_pFilter->SetLibraryFilter([&]()
			{
				std::cout << "Rebar - Library Filter" << std::endl;
			});
	};
	virtual void BulidConstructionFilter()	override
	{
		m_pFilter->SetConstructionFilter([&]()
			{
				std::cout << "Rebar - Construction Filter" << std::endl;
			});
	};
	virtual	void BulidComponentFilter()		override
	{
		m_pFilter->SetComponentFIlter([&]()
			{
				std::cout << "Rebar - Component Filter" << std::endl;
			});
	};
};

class StiffenerFilterBuilder : public FilterBuilder
{
public:
	StiffenerFilterBuilder() = default;
	virtual ~StiffenerFilterBuilder() {};

	virtual void BulidLibraryFilter()		override
	{
		m_pFilter->SetLibraryFilter([&]()
			{
				std::cout << "Stiffener - Library Filter" << std::endl;

			});
	};
	virtual void BulidConstructionFilter()	override
	{
		m_pFilter->SetConstructionFilter([&]()
			{
				std::cout << "Stiffener - Construction Filter" << std::endl;
			});
	};
	virtual	void BulidComponentFilter()		override
	{
		m_pFilter->SetComponentFIlter([&]()
			{
				std::cout << "Stiffener - COmponent Filter" << std::endl;
			});
	};
};