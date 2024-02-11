#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Role.h"
#include "Perso.h"
#include "Carte.h"


class Jeu
{
private:
    int nbplayer;
    std::vector<Role> roles;
    std::vector<Perso> personnages;
    std::vector<Carte> deck;

public:
    Jeu();
    Jeu(int nbplayer, std::vector<Perso> personnages, std::vector<Role> roles, std::vector<Carte> deck);
    ~Jeu();
    int getnbplayer();
    std::vector<Role> getroles();
    std::vector<Perso> getpersonnages();
    std::vector<Carte> getdeck();
    void setnbplayer(int nbplayer);
    void setroles(std::vector<Role> roles);
    void setpersonnages(std::vector<Perso> personnages);
    void setdeck(std::vector<Carte> deck);
};
