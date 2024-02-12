#include "CAction.h"
#include <iostream>
#include <string>

using namespace std;

CAction::CAction(string name, ActionType type,int degat, int honneurPoint, bool permanent, bool Playerviser, int pointdevie, int nombredecartepiocher, bool hasard) : Carte(name) {
	this->degat = degat;
	this->honneurPoint = honneurPoint;
	this->permanent = permanent;
	this->Playerviser = Playerviser;
	this->pointdevie = pointdevie;
	this->nombredecartepiocher = nombredecartepiocher;
	this->hasard = hasard;
}

int CAction::getDegat() {
	return degat;
}

int CAction::gethonneurPoint() {
	return honneurPoint;
}

bool CAction::getPermanent() {
	return permanent;
}

bool CAction::getPlayerViser() {
	return Playerviser;
}

int CAction::getPointDeVie() {
	return pointdevie;
}

int CAction::getNombreDeCartePiocher() {
	return nombredecartepiocher;
}

bool CAction::getHasard() {
	return hasard;
}

CAction::~CAction() {
	// Destructor implementation
}

void CAction::setDegat(int degat) {
	this->degat = degat;
}

void CAction::sethonneurPoint(int honneurPoint) {
	this->honneurPoint = honneurPoint;
}

void CAction::setPermanent(bool permanent) {
	this->permanent = permanent;
}

void CAction::setPlayerViser(bool Playerviser) {
	this->Playerviser = Playerviser;
}

void CAction::setPointDeVie(int pointdevie) {
	this->pointdevie = pointdevie;
}

void CAction::setNombreDeCartePiocher(int nombredecartepiocher) {
	this->nombredecartepiocher = nombredecartepiocher;
}

void CAction::setHasard(bool hasard) {
	this->hasard = hasard;
}

// Path: katana/CAction.h