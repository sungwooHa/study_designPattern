#pragma once

#include <iostream>

class Quantity
{
public:
	Quantity() = default;
	virtual ~Quantity() {};
	virtual const void GetQuantity() const = 0;
protected:
};


class ConcreteQuantity : public Quantity
{
public:

	ConcreteQuantity() = default;
	virtual ~ConcreteQuantity() {};
	virtual const void GetQuantity() const override
	{
		std::cout << "Concrete Quantity" << std::endl;
	}

protected:
};

class StiffenerQuantity : public Quantity
{
public:
	StiffenerQuantity() = default;
	virtual ~StiffenerQuantity() {};
	virtual const void GetQuantity() const override
	{
		std::cout << "Stiffener Quantity" << std::endl;
	}
protected:
};