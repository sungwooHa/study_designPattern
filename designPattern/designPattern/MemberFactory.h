#pragma once

#include "Member.h"

using namespace std;

class MemberFactory
{
public:
	std::unique_ptr<Member> CreateMember(MemberType memberType)
	{
		switch (memberType)
		{
		case MemberType::concreate: return std::make_unique<Concreate>();
		case MemberType::steel:return std::make_unique<Steel>();
		case MemberType::rebar:return  std::make_unique<Rebar>(); 
		case MemberType::stiffener:return std::make_unique<Stiffener>();
			break;
		case MemberType::none: [[fallthrough]];
		default:
			break;
		}
		return nullptr;
	}
private:
};
