#pragma once
#include <vector>
#include "jeu.h"
#include "Playeur.h"
#include "Carte.h"

// parcour la liste et attand un reponce d'un joueur avans de continuer

void attententRepPlayer(std::vector<Playeur> playeurs, std::vector<Carte> deck, Jeu game); // paramatre: vector des joueurs
std::vector<Carte> piocherCarte(std::vector<Carte> deck, Playeur playeur, Jeu game); // paramatre: vector des joueurs, playeur ,le 
