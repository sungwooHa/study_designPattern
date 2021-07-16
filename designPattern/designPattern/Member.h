#pragma once

#include "DateDef.h"

using namespace std;

class Member
{
public:
	Member()
	{
		memType = MemberType::none;
		prop = "none";
	};
	virtual std::string GetProperty() { assert(false); return prop; }
	virtual MemberType GetMaterialType() { assert(false); return memType; }
	virtual const Quantity GetQuantity() { assert(false); return quantity; }
private:
	MemberType memType;
	Quantity quantity;
	string prop;
};


class Concreate : public Member
{
public:
	Concreate()
	{

	};
	virtual ~Concreate() {};
	virtual std::string GetProperty() override { return "Concreate Property"; };
	virtual MemberType GetMaterialType() override { return MemberType::rebar; }
	virtual const Quantity GetQuantity() override { return Quantity().SetVolume(100); }
};


class Steel : public Member
{
public:
	Steel()
	{

	};
	virtual ~Steel() {};
	virtual std::string GetProperty() override { return "Steel Property"; };
	virtual MemberType GetMaterialType() override { return MemberType::steel; }
	virtual const Quantity GetQuantity() override { return Quantity().SetLength(10); }
};

class Rebar : public Member
{
public:
	Rebar()
	{

	};
	virtual ~Rebar() {};
	virtual std::string GetProperty() override { return "Rebar Property"; };
	virtual MemberType GetMaterialType() override { return MemberType::rebar; }
	virtual const Quantity GetQuantity() override { return Quantity().SetEA(100).SetLength(10); }
};

class Stiffener : public Member
{
public:
	Stiffener()
	{

	};
	virtual ~Stiffener() {};
	virtual std::string GetProperty() override { return "Stiffener Property"; };
	virtual MemberType GetMaterialType() override { return MemberType::stiffener; }
	virtual const Quantity GetQuantity() override { return Quantity().SetEA(15).SetWeight(30); }
};

