#pragma once
#include <string>
#include <vector>
#include "role.h"
#include "perso.h"
#include "CArme.h"
#include "CAction.h"
#include "CPerma.h"
#include "Jeu.h"
#include <algorithm>
#include "playeur.h"

std::vector<Role> InitialisationRole(int nbjoueur);
std::vector<Carte> InitialisationDeck();
std::vector<Perso> initialisationPersonnage();
void InitialisationDeckPlayer(std::vector<Carte>& deck, std::string role, int id, Playeur& playeur);



