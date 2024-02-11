#include "Playeur.h"
#include "role.h"
#include "perso.h"
#include <iostream>
#include <string>
#include <vector>
#include "Carte.h"
#include "jeu.h"

using namespace std;

// Function to get a subset of the deck player


Playeur::Playeur(const string& name,const string& status, Role& role, const Perso& perso, vector<Carte>& DeckPlayer, int id)
    : name(name), status(status), role(role), perso(perso), DeckPlayer(DeckPlayer), id(id)
{
    //initialiser moi les membres ici
    this->name = name;
    this->status = status;
    this->role = role;
    this->perso = perso;
    this->DeckPlayer = DeckPlayer;
    this->id = id;
}

Playeur::~Playeur()
{
}

Role& Playeur::getRole()
{
    return role;
}

const Perso& Playeur::getPerso()
{
    return perso;
}

string Playeur::getName()
{
    return name;
}

string Playeur::getStatus()
{
    return status;
}

vector<Carte> Playeur::getDeckPlayer()
{
    return DeckPlayer;
}

int Playeur::getId()
{
    return id;
}

void Playeur::setRole(Role& role)
{
    this->role = role;
}

void Playeur::setPerso(const Perso& perso)
{
    this->perso = perso;
}

void Playeur::setName(string& name)
{
    this->name = name;
}

void Playeur::setStatus(string& status)
{
    this->status = status;
}

void Playeur::setDeckPlayer(vector<Carte> DeckPlayer)
{
    //si le joueur et shogune prend les 4 premier carte du deck est est les supprime
    
    this->DeckPlayer = DeckPlayer;

}

void Playeur::setId(int id)
{
    	this->id = id;
}
