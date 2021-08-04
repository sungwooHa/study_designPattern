#pragma once
#include <iostream>
#include <memory>
#include <vector>


//Component
class Phase
{
public:
	Phase(const std::string& name) { this->name = name; }
	virtual ~Phase() {};

	virtual void Initialize() { std::cout << "Initilize Phase" << std::endl; };
	std::shared_ptr<Phase> GetParents() { return parents; }
	void SetParents(std::shared_ptr<Phase> parents) { this->parents = parents; }
	const auto& GetName() const { return name; };
	void SetName(const std::string& name) { this->name = name; };
protected:
	Phase() = default;
	std::shared_ptr<Phase> parents;
	std::string name;
};

class GroupPhase : public Phase
{
public:
	GroupPhase() {};
	GroupPhase(const std::string& name) : Phase(name) {}

	virtual ~GroupPhase() {};
	virtual void Initialize() override { std::cout << "Initilize Group Phase" << std::endl; };
	void Add(std::shared_ptr<Phase> child) 
	{
		for (auto itr = children.begin(); itr != children.end(); ++itr)
		{
			if (itr->get()->GetName() == name)
			{
				std::cout << "duplicated name" << std::endl;
				return;
			}
		}
		children.push_back(child); 
	}

	void ShowTree()
	{
		std::cout << GetName() << std::endl;
		for (const auto child : children)
		{
			auto childGroup = std::dynamic_pointer_cast<GroupPhase>(child);
			if (childGroup)
				childGroup->ShowTree();
			else
				std::cout << child->GetName() << std::endl;
		}
	}

	void Delete(std::string name)
	{
		for (auto itr = children.begin(); itr != children.end(); ++itr)
		{
			if (itr->get()->GetName() == name)
			{
				itr = children.erase(itr);
				break;
			}
		}
	};

protected:
	std::vector<std::shared_ptr<Phase>> children;
};

class ScalarPhase : public Phase
{
public :
	ScalarPhase() {};
	ScalarPhase(const std::string& name) : Phase(name) {}
	virtual ~ScalarPhase() {};
	virtual void Initialize() override { std::cout << "Initilize Scalar Phase" << std::endl; };

protected:

};
