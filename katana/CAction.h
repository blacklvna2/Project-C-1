#pragma once
#include "Carte.h"
class CAction : public Carte
{
private:
	std::string	description;
public:
	CAction(std::string name, std::string description);
	~CAction();
	std::string getDescription();
	void setDescription(std::string description);
};

