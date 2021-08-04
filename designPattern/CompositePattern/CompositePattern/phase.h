#pragma once

#include <memory>


//Component
class Phase
{
public:
	Phase() = default;
	virtual ~Phase() {};

	void SetParents(std::unique_ptr<Phase> parents) { this->parents = std::move(parents); }
protected:
	std::unique_ptr<Phase> parents;
};