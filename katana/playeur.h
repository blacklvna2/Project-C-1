#pragma once
#include <iostream>
#include <string>
#include "role.h"
#include "perso.h"
#include <list>


class Playeur {
public:
	Playeur(const std::string& name,const std::string& status, const Role& role, const Perso& perso);
	~Playeur();
	std::string getRole();
	std::string getName();
	int getHonor();
	int getPlayerPV();
	int getPlayeurCapaciterSpeciale();
	void setRole(const Role& role);
	void setPerso(const Perso& perso);
	void setName(std::string& name);
	void setHonor(int honor);
	void setPlayerPV(int pv);
	void setCapaciterSpeciale(int capaciterSpeciale);

private:
	std::string name;
	std::string status;
	Role role;
	Perso perso;
	

};