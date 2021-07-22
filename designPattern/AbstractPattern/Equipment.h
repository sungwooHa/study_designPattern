#pragma once
#include <string_view>


class Sword
{
public:
	Sword() {}
	virtual ~Sword() {}
	const virtual std::string_view GetSword() const = 0;
private:
};

class LongSword : public Sword
{
public:

	LongSword() {}
	virtual ~LongSword() {}
	const virtual std::string_view GetSword() const
	{
		return "Long sword";
	}

private:
};

class Rapier : public Sword
{
public:
	Rapier() {}
	virtual ~Rapier() {}
	const virtual std::string_view GetSword() const
	{
		return "Rapier";
	}

private:
};

class Shield 
{
public:
	Shield() {}
	virtual ~Shield() {}
	const virtual std::string_view GetShield() const = 0;

private:
};

class RoundShield : public Shield
{
public:
	RoundShield() {}
	virtual ~RoundShield() {}
	const virtual std::string_view GetShield() const
	{
		return "Round shield";
	}

private:
};

class KiteShield : public Shield
{
public:
	KiteShield() {}
	virtual ~KiteShield() {}
	const virtual std::string_view GetShield() const
	{
		return "Kite shield";
	}

private:
};

class Buckler : public Shield
{
public:
	Buckler() {}
	virtual ~Buckler() {}
	const virtual std::string_view GetShield() const
	{
		return "Buckler";
	}

private:
};