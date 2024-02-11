#pragma once
#include <iostream>
#include <string>
#include "role.h"
#include "perso.h"
#include "Carte.h"
#include <vector>



class Playeur {
public:
	Playeur(const std::string& name,const std::string& status,Role& role, const Perso& perso, std::vector<Carte>& DeckPlayer, int id);
	~Playeur();
	Role& getRole();
	const Perso& getPerso();
	std::string getName();
	std::string getStatus();
	std::vector<Carte> getDeckPlayer();
	int getId();
	void setRole(Role& role);
	void setPerso(const Perso& perso);
	void setName(std::string& name);
	void setStatus(std::string& status);
	void setDeckPlayer(std::vector<Carte> DeckPlayer);
	void setId(int id);

private:
	std::string name;
	std::string status;
	Role role;
	Perso perso;
	std::vector<Carte> DeckPlayer;
	int id;
};