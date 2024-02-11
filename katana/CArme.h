#pragma once
#include <iostream>
#include <string>
#include "Carte.h"

enum ArmeType {
	NODACHI,
	NAGINATA,
	NAGAYARI,
	TANEGASHIMA,
	DAIKYU,
	BO,
	KUSARIGAMA,
	KATANA,
	SHURIKEN,
	KANABO,
	BOKKEN,
	KISERU,
	WAKIZASHI
};



class CArme : public Carte
{
private:
	ArmeType type;
	int degat;
	int precision;

public:
	int getDegat();
	int getPrecision();

	CArme(std::string name,ArmeType type, int degat, int precision);
	~CArme();
	void setDegat(int degat);
	void setPrecision(int precision);
};