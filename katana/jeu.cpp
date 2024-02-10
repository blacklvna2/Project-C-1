#include "jeu.h"
#include <iostream>
#include <string>
#include <list>
#include "Role.h"
#include "Perso.h"

Jeu::Jeu()
{
}

Jeu::Jeu(int nbplayeur, std::list<Perso> personnages, std::list<Role> roles)
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

void Jeu::getroles()
{
    /*returne liste des role*/
    return;
}

void Jeu::getpersonnages()
{
}

void Jeu::setnbplayer(int nbplayer)
{
    this->nbplayer = nbplayer;
}

void Jeu::setroles(std::list<Role> Role)
{
    this->roles = roles;
}

void Jeu::setpersonnages(std::list<Perso> personnages)
{
    this->personnages = personnages;
}
