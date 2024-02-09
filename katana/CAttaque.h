#pragma once
#include <iostream>
#include <string>
#include "Carte.h"

class CAttaque : public Carte
{
private:

	int degat;
	int precision;

public:
	int getDegat();
	int getPrecision();

	CAttaque(std::string name, int degat, int precision);
	~CAttaque();
	void setDegat(int degat);
	void setPrecision(int precision);


};