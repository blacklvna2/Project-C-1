#include "jeu.h"
#include <iostream>
#include <string>
#include <list>
#include "Role.h"
#include "Perso.h"

jeu::jeu()
{
}

jeu::jeu(int nbplayeur, std::list<Perso> personnages, std::list<Role> roles)
{
    nbplayer = nbplayeur;
    this->personnages = personnages;
    this->roles = roles;
}

jeu::~jeu()
{
}

int jeu::getnbplayer()
{
    return nbplayer;
}

void jeu::getroles()
{
    /*returne liste des role*/
    return;
}

void jeu::getpersonnages()
{
}

void jeu::setnbplayer(int nbplayer)
{
    this->nbplayer = nbplayer;
}

void jeu::setroles(std::list<Role> Role)
{
    this->roles = roles;
}

void jeu::setpersonnages(std::list<Perso> personnages)
{
    this->personnages = personnages;
}
