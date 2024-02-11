#include "jeu.h"
#include <iostream>
#include <string>
#include <vector>
#include "Carte.h"


Jeu::Jeu()
{
}

Jeu::Jeu(int nbplayeur, std::vector<Perso> personnages, std::vector<Role> roles, std::vector<Carte> deck)
{
    nbplayer = nbplayeur;
    this->personnages = personnages;
    this->roles = roles;
}

Jeu::~Jeu()
{
}

int Jeu::getnbplayer()
{
    return nbplayer;
}

std::vector<Role> Jeu::getroles()
{
    /*returne vectore des role*/

    return roles;
}

std::vector<Perso> Jeu::getpersonnages()
{
	return personnages;
}

std::vector<Carte> Jeu::getdeck()
{
	return deck;
}

void Jeu::setnbplayer(int nbplayer)
{
    this->nbplayer = nbplayer;
}

void Jeu::setroles(std::vector<Role> Role)
{
    this->roles = roles;
}

void Jeu::setpersonnages(std::vector<Perso> personnages)
{
    this->personnages = personnages;
}

void Jeu::setdeck(std::vector<Carte> deck)
{
	this->deck = deck;
}