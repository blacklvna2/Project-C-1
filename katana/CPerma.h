#pragma once
#include <iostream>
#include <string>
#include "Carte.h"
class CPerma : public Carte
{
private:
	std::string description;



public:
	CPerma(string name, string description);
	std::string getDescription();
	void setDescription(std::string);


};