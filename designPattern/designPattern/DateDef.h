#pragma once
#include <assert.h>
#include <iostream>
#include <string_view>

class Quantity
{
public : 
	Quantity()
	{
		Init();
	};
	
	void Init()
	{
		length = 0.;
		volume = 0.;
		weight = 0.;
		ea = 0;
	}

	Quantity& SetLength(double length) { this->length = length; return *this; };
	Quantity& SetVolume(double volume) { this->volume = volume;  return *this;};
	Quantity& SetWeight(double weight) { this->weight = weight;  return *this;};
	Quantity& SetEA(unsigned int ea) { this->ea = ea;  return *this;};

	const void PrintQuantity() const
	{
		std::cout << "length : " << length << std::endl;
		std::cout << "volume : " << volume << std::endl;
		std::cout << "weight : " << weight << std::endl;
		std::cout << " ea	 : " << ea << std::endl;
	}

	const auto GetLength() const { return length; };
	const auto GetVolume() const { return volume; };
	const auto GetWeight() const { return weight; };
	const auto GetEA() const { return ea; };

protected :
	double		length;
	double		volume;
	double		weight;
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

constexpr static std::string_view  GetMemberText(MemberType memberType)
{
	switch (memberType)
	{
	case MemberType::none:
		return "none";
	case MemberType::concreate:
		return "concrete";
	case MemberType::steel:
		return "steel";
	case MemberType::rebar:
		return "rebar";
	case MemberType::stiffener:
		return "stiffener";
	default:
		assert(false);
		break;
	}
	return "";
}