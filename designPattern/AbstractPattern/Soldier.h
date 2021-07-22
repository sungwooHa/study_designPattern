#pragma once
#include <string_view>
#include "Equipment.h"

class Soldier
{
public:
	virtual ~Soldier() {};
	virtual const std::unique_ptr<const Sword> Attack() const = 0 ;
	virtual const std::unique_ptr<const Shield> Defend() const = 0;
	virtual const std::string GetNationality() = 0;
protected:

private:

};


class SwitzerlandSoldier : public Soldier
{
public:
	virtual ~SwitzerlandSoldier() {};
	virtual const std::unique_ptr<const Sword> Attack() const override
	{
		return std::make_unique<LongSword>();
	}
	virtual const std::unique_ptr<const Shield> Defend() const override
	{
		return std::make_unique<RoundShield>();
	}

	virtual const std::string GetNationality() override
	{
		return "Switzerland";
	}

protected:
};

class GermanySoldier : public Soldier
{
public:
	virtual ~GermanySoldier() {};
	virtual const std::unique_ptr<const Sword> Attack() const override
	{
		return std::make_unique<Rapier>();
	}
	virtual const std::unique_ptr<const Shield> Defend() const override
	{
		return std::make_unique<Buckler>();
	}
	virtual const std::string GetNationality() override
	{
		return "Germany";
	}
protected:
};

class BritishSoldier : public Soldier
{
public:
	virtual ~BritishSoldier() {};
	virtual const std::unique_ptr<const Sword> Attack() const override
	{
		return std::make_unique<LongSword>();
	}
	virtual const std::unique_ptr<const Shield> Defend() const override
	{
		return std::make_unique<Buckler>();
	}
	virtual const std::string GetNationality() override
	{
		return "England";
	}
protected:
};