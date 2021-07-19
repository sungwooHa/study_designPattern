#pragma once

#include "DateDef.h"

using namespace std;


//interface
class Member
{
public:
	Member()
	{	};
	virtual const std::string GetProperty() const = 0;
	virtual const Quantity GetQuantity() const = 0;
	virtual const MemberType GetMemberType() const = 0;
protected:
};


class Concreate : public Member
{
public:
	Concreate()
	{
	};

	virtual ~Concreate() {};
	virtual const std::string GetProperty() const { return "Concrete Property"; }
	virtual const Quantity GetQuantity() const { return Quantity().SetVolume(100); }
	virtual const MemberType GetMemberType() const { return MemberType::concreate; }
};


class Steel : public Member
{
public:
	Steel()
	{
	};
	virtual ~Steel() {};
	virtual const std::string GetProperty() const { return "Steel Property"; }
	virtual const Quantity GetQuantity() const { return Quantity().SetLength(15); }
	virtual const MemberType GetMemberType() const { return MemberType::steel; }
};

class Rebar : public Member
{
public:
	Rebar()
	{
	};
	virtual ~Rebar() {};
	virtual const std::string GetProperty() const { return "Rebar Property"; }
	virtual const Quantity GetQuantity() const { return Quantity().SetLength(10); }
	virtual const MemberType GetMemberType() const { return MemberType::rebar; }
};

class Stiffener : public Member
{
public:
	Stiffener()
	{
	};
	virtual ~Stiffener() {};
	virtual const std::string GetProperty() const { return "Stiffener Property"; }
	virtual const Quantity GetQuantity() const { return Quantity().SetEA(15).SetWeight(30); }
	virtual const MemberType GetMemberType() const { return MemberType::stiffener; }
};

