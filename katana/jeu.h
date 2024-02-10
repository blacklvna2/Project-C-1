#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Role.h"
#include "Perso.h"

class Jeu
{
private:
    int nbplayer;

    std::list<Role> roles;

    std::list<Perso> personnages;

public:
    Jeu();
    Jeu(int nbplayer, std::list<Perso> personnages, std::list<Role> roles);
    ~Jeu();
    int getnbplayer();
    void getroles();
    void getpersonnages();
    void setnbplayer(int nbplayer);
    void setroles(std::list<Role> roles);
    void setpersonnages(std::list<Perso> personnages);
};
