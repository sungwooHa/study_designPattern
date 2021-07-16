#pragma once
#include <assert.h>
#include <iostream>

class Quantity
{
public : 
	Quantity()
	{
		length = 0.;
		volume = 0.;
		weight = 0.;
		ea = 0;
	};
	
	Quantity& SetLength(double length) { this->length = length; return *this; };
	Quantity& SetVolume(double volume) { this->volume = volume;  return *this;};
	Quantity& SetWeight(double weight) { this->weight = weight;  return *this;};
	Quantity& SetEA(unsigned int ea) { this->ea = ea;  return *this;};

	const auto GetLength() const { return length; };
	const auto GetVolume() const { return volume; };
	const auto GetWeight() const { return weight; };
	const auto GetEA() const { return ea; };

protected :
	double length;
	double volume;
	double weight;
	unsigned int ea;
};

enum class MemberType : unsigned int
{
	none,
	concreate,
	steel,
	rebar,
	stiffener
};