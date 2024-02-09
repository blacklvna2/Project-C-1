#include "Carte.h"
#include <iostream>
#include <string>

using namespace std;

Carte::Carte(string name)
{
	this->name = name;
}

string Carte::getName() {
	return name;
}

void Carte::setName(string name) {
	this->name = name;
}



