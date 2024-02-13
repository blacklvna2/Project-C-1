#pragma once

#include <string>
#include <vector>
#include "Carte.h"
#include "Playeur.h"
#include "Fonction.h"
#include "distancePlayeur.h"

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <windows.h>
#include "Carte.h"
#include "CAction.h"
#include "CArme.h"
#include "CPerma.h"
#include "DescPerso.h"
#include "distancePlayeur.h"
#include "jeu.h"
#include "playeur.h"
#include "effetCarte.h"
#include "Fonction.h"
#include "initgame.h"
#include "perso.h"
#include "resource.h"
#include "role.h"
#include "tourPlayeur.h"

void effectCartArme(Carte carte, Playeur* playeur, Playeur* cible);
void effetAction(std::string NameCarte);
void effectCartPerma(Carte carte, Playeur* playeur);
void effectCartePerso(Playeur Playeur, Carte carte);