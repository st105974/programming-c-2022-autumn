#pragma once
#include <string>
#include <iostream>
class Animal
{
private:
	std::string name;
	std::string type;
	int strength;
public:
	int GetStrength();
	std::string GetName();
	std::string GetType();
	void SetStrength(int strength);
	void SetName(std::string name);
	void SetType(std::string type);
	Animal(int strength = 0, std::string name = "", std::string type = "") :strength(strength), type(type), name(name) {}
	Animal(const Animal& an) : name(an.name), type(an.type), strength(an.strength) {}
	void PrintInfo();
	void Mighter();
	~Animal();
};

