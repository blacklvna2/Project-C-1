#pragma once
#include <iostream>
#include <string>
#include "role.h"
#include "perso.h"


class Playeur : public Role, public Perso {
public:
	Playeur(std::string name, std::string status, const Role& role, const Perso& perso);
	~Playeur();
	std::string getRole();
	std::string getName();
	int getHonor();
	int getPlayerPV();
	int getPlayeurCapaciterSpeciale();
	void setRole(std::string role);
	void setPerso(std::string perso);
	void setName(std::string name);
	void setHonor(int honor);
	void setPlayerPV(int pv);
	void setCapaciterSpeciale(int capaciterSpeciale);

private:
	std::string name;
	std::string status;
	Role role;
	Perso perso;

};