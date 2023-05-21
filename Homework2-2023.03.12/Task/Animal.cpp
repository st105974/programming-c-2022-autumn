#include "Animal.h"
	int Animal::GetStrength()
	{
		return strength;
	}
	std::string Animal::GetName()
	{
		return name;
	}
	std::string Animal::GetType()
	{
		return type;
	}
	void Animal::SetStrength(int strength)
	{
		this->strength = strength;
	}
	void Animal::SetName(std::string name)
	{
		this->name = name;
	}
	void Animal::SetType(std::string type)
	{
		this->type = type;
	}
	void Animal::PrintInfo()
	{
		std::cout << this->type << " " << this->name << " " << this->strength << std::endl;
	}
	void Animal::Mighter()
	{
		this->strength += 1;
	}

	Animal::~Animal(){}