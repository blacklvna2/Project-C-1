#include "CAction.h"
#include <iostream>
using namespace std;
CAction::CAction(string name, string description) : Carte(name) {
	this->name = name;
	this->description = description;
}