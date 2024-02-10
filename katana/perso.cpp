#include "Perso.h"
#include <iostream>
#include <string>

Perso::Perso()
{
}

Perso::Perso( std::string name, PersoType type, int pv, int capaciter_speciale) {
    this->name = name;
    this->pv = pv;
    this->capaciter_speciale = capaciter_speciale;
}

Perso::~Perso() {
    // Destructor implementation
}

int Perso::getPv() {
    return pv;
}

int Perso::getCapaciterSpeciale() {
    return capaciter_speciale;          // todo: implement function
}


std::string Perso::getName() {
	return name;          // todo: implement function
}

void Perso::setPv(int pv) {
	this->pv = pv;
}

void Perso::setCapaciterSpeciale(int capaciter_speciale) {
	this->capaciter_speciale = capaciter_speciale;
}

void Perso::setPersoName(std::string name) {
	this->name = name;
}