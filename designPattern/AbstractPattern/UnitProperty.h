#pragma once
#include <string_view>


class AbstractProperty
{
public:
	AbstractProperty() {}
	virtual ~AbstractProperty() {}
	const virtual std::string_view GetProertyValue() const = 0;
private:
};

class ClassificationProperty : public AbstractProperty
{
public:

	ClassificationProperty() {}
	virtual ~ClassificationProperty() {}
	const virtual std::string_view GetProertyValue() const
	{
		return "Classification Property";
	}

private:
};

class StructureProperty : public AbstractProperty
{
public:
	StructureProperty() {}
	virtual ~StructureProperty() {}
	const virtual std::string_view GetProertyValue() const
	{
		return "Structure Property";
	}

private:
};

class FieldProperty : public AbstractProperty
{
public:
	FieldProperty() {}
	virtual ~FieldProperty() {}
	const virtual std::string_view GetProertyValue() const
	{
		return "Field Property";
	}

private:
};

class MaterialProperty : public AbstractProperty
{
public:
	MaterialProperty() {}
	virtual ~MaterialProperty() {}
	const virtual std::string_view GetProertyValue() const
	{
		return "Material Property";
	}

private:
};

class AlignmentProperty : public AbstractProperty
{
public:
	AlignmentProperty() {}
	virtual ~AlignmentProperty() {}
	const virtual std::string_view GetProertyValue() const
	{
		return "Alignment Property";
	}

private:
};

class SpacingProperty : public AbstractProperty
{
public:
	SpacingProperty() {}
	virtual ~SpacingProperty() {}
	const virtual std::string_view GetProertyValue() const
	{
		return "Spacing Property";
	}

private:
};