#include "CPerma.h"
using namespace std;



CPerma::CPerma(string name, string description) :Carte(name){
	this->name = name;
	this->description = description;
}
void CPerma::setDescription(string description) {
	this->description = description;
}

string CPerma::getDescription() {
	return description;
}