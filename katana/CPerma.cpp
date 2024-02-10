#include "CPerma.h"
#include <iostream>
#include <string>






CPerma::CPerma(std::string name, PermanentType type, int DegatSupplementaire, int DifficulterDataque, int Armesupplementaire, int PlacementDeCarte, bool finDeTourPioche) : Carte(name) {
	this->type = type;
	this->DegatSupplementaire = DegatSupplementaire;
	this->DifficulterDataque = DifficulterDataque;
	this->Armesupplementaire = Armesupplementaire;
	this->PlacementDeCarte = PlacementDeCarte;
	this->finDeTourPioche = finDeTourPioche;
}

CPerma::~CPerma() {
	// Destructor implementation
}

PermanentType CPerma::getType() {
	return type;
}

int CPerma::getDegatSupplementaire() {
	return DegatSupplementaire;
}

int CPerma::getDifficulterDataque() {
	return DifficulterDataque;
}

int CPerma::getArmesupplementaire() {
	return Armesupplementaire;
}

int CPerma::getPlacementDeCarte() {
	return PlacementDeCarte;
}

bool CPerma::getFinDeTourPioche() {
	return finDeTourPioche;
}

void CPerma::setType(PermanentType type) {
	this->type = type;
}

void CPerma::setDegatSupplementaire(int DegatSupplementaire) {
	this->DegatSupplementaire = DegatSupplementaire;
}

void CPerma::setDifficulterDataque(int DifficulterDataque) {
	this->DifficulterDataque = DifficulterDataque;
}

void CPerma::setArmesupplementaire(int Armesupplementaire) {
	this->Armesupplementaire = Armesupplementaire;
}

void CPerma::setPlacementDeCarte(int PlacementDeCarte) {
	this->PlacementDeCarte = PlacementDeCarte;
}

void CPerma::setFinDeTourPioche(bool finDeTourPioche) {
	this->finDeTourPioche = finDeTourPioche;
}

// Path: katana/CPerma.h
