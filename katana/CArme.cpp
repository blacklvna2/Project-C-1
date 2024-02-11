#include "CArme.h"
#include <iostream>
#include <string>
using namespace std;

CArme::CArme(string name,ArmeType type, int degat, int precision) : Carte(name) {
	this->degat = degat;
	this->precision = precision;
}

int CArme::getDegat() {
	return degat;
}
int CArme::getPrecision() {
	return precision;
}

CArme::~CArme() {
	// Destructor implementation
}
void CArme::setDegat(int degat) {
	this->degat = degat;
}
void CArme::setPrecision( int precision) {
	this->precision = precision;
}
