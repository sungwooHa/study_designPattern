#pragma once
#include "Quantity.h"

class Member
{
public:
	Member() = default;
	Member(std::unique_ptr<Quantity> quantity)
	{
		this->quantity = std::move(quantity);
	}
	virtual ~Member() {};

	const void ActivateQuantity() const
	{
		quantity->GetQuantity();
	}
protected:
	std::unique_ptr<Quantity> quantity;
};

class Concrete : public Member
{
public:
	Concrete() = default;
	Concrete(std::unique_ptr<Quantity> quantity)
	{
		this->quantity = std::move(quantity);
	}
	virtual ~Concrete() {};

protected:
};

class Stiffener : public Member
{
public:
	Stiffener() = default;
	Stiffener(std::unique_ptr<Quantity> quantity)
	{
		this->quantity = std::move(quantity);
	}
	virtual ~Stiffener() {};

protected:
};