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
    this->role = Role();
    this->perso = Perso();
    

}

Playeur::~Playeur()
{
}

std::string Playeur::getRole()
{
    return role.getRoleName();
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

void Playeur::setRole(std::string& role)
{
    this->role.setRoleName(role);
}

void Playeur::setPerso(std::string& perso)
{
    this->perso.setPersoName(perso);
}

void Playeur::setName(std::string& name)
{
    this->name = name;
}

void Playeur::setHonor(int honor)
{
    this->role.setHonor(honor);
}

void Playeur::setPlayerPV(int pv)
{
    this->perso.setPv(pv);
}

void Playeur::setCapaciterSpeciale(int capaciterSpeciale)
{
    this->perso.setCapaciterSpeciale(capaciterSpeciale);
}
