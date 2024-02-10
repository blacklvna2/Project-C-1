#include "Playeur.h"
#include "role.h"
#include "perso.h"
#include <iostream>
#include <string>



Playeur::Playeur(const std::string& name,const std::string& status, const Role& role, const Perso& perso)
    : name(name), status(status), role(role), perso(perso)
{
    //initialiser moi les membres ici
    this->name = name;
    this->status = status;
    this->role = role;
    this->perso = perso;
    

}

Playeur::~Playeur()
{
}

const Role& Playeur::getRole()
{
    return role;
}

const Perso& Playeur::getPerso()
{
	return perso;
}

std::string Playeur::getName()
{
    return name;
}

int Playeur::getHonor()
{
    return role.getHonor();
}

int Playeur::getPlayerPV()
{
    return perso.getPv();
}

int Playeur::getPlayeurCapaciterSpeciale()
{
    return perso.getCapaciterSpeciale();
}

void Playeur::setRole(const Role& role)
{
    this->role = role;
}

void Playeur::setPerso(const Perso& perso)
{
    this->perso = perso;
}

void Playeur::setName(std::string& name)
{
    this->name = name;
}

void Playeur::setHonor(int honor)
{
    role.setHonor(honor);
}

void Playeur::setPlayerPV(int pv)
{
    perso.setPv(pv);
}

void Playeur::setCapaciterSpeciale(int capaciterSpeciale)
{
    perso.setCapaciterSpeciale(capaciterSpeciale);
}
