#pragma once

#include "Member.h"

using namespace std;

class MemberFactory
{
public:
	virtual Member* CreateMember() { assert(false); return new Member(); };
private:
};

class ConcreateFactory : public MemberFactory
{
public:
	virtual Concreate* CreateMember() { return new Concreate(); }
};


class SteelFactory : public MemberFactory
{
public:
	virtual Steel* CreateMember() { return new Steel(); }
};

class RebarFactory : public MemberFactory
{
public:
	virtual Rebar* CreateMember() { return new Rebar(); }
};

class StiffenerFactory : public MemberFactory
{
public:
	virtual Stiffener* CreateMember() { return new Stiffener(); }
};

