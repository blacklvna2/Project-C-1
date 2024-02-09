#include "CAttaque.h"
#include <iostream>
#include <string>
using namespace std;
CAttaque::CAttaque(string name, int degat, int precision) : Carte(name) {
	this->degat = degat;
	this->precision = precision;
}

int CAttaque::getDegat() {
	return degat;
}
int CAttaque::getPrecision() {
	return precision;
}

CAttaque::~CAttaque() {
	// Destructor implementation
}
void CAttaque::setDegat(int degat) {
	this->degat = degat;
}
void CAttaque::setPrecision( int precision) {
	this->precision = precision;
}
