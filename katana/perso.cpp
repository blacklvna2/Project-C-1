#include "perso.h"
#include <iostream>
#include <string>

perso::perso(int pv, int capaciter_speciale) {
    this->pv = pv;
    this->capaciter_speciale = capaciter_speciale;
}

perso::~perso() {
    // Destructor implementation
}

int perso::getPv() {
    return pv;
}

int perso::getCapaciterSpeciale() {
    return capaciter_speciale;          // todo: implement function
}
