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

std::vector<Role> InitialisationPlayeur(int nbjoueur);
std::vector<Carte> InitialisationDeck();
std::vector<Perso> initialisationPersonnage();



