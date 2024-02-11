#pragma once
#include <string>

class Carte
{
protected:
	std::string name;
	int id;

public:
	Carte(std::string name);

	std::string getName();
	void setName(std::string name);
};

