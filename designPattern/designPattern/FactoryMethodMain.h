#pragma once;

#include "MemberFactory.h"

class FactoryMethodMain
{
public:
	FactoryMethodMain() {};
	virtual ~FactoryMethodMain() {};

	static void PrintProperty(std::shared_ptr<Member> data)
	{
		cout << GetMemberText(data->GetMemberType()) << endl;
		cout << data->GetProperty().c_str() << endl;
		data->GetQuantity().PrintQuantity();
	}

	static void Drive()
	{
		MemberFactory factory;
		PrintProperty(factory.CreateMember(MemberType::concreate));
		PrintProperty(factory.CreateMember(MemberType::steel));
		PrintProperty(factory.CreateMember(MemberType::rebar));
		PrintProperty(factory.CreateMember(MemberType::stiffener));
	};
protected:

private:
};
