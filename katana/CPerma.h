#pragma once
#include <iostream>
#include <string>
#include "Carte.h"

enum PermanentType {
    ARMURE,
    CODEDUBUSHIDO,
    ATTAQUERAPIDE,
    CONCENTRATION
};

class CPerma : public Carte
{
private:
	PermanentType type;
	int DegatSupplementaire;// Attaque rapide
    int DifficulterDataque;// Armure
    int Armesupplementaire;// Consentration
    int PlacementDeCarte;// Code du bushido
    bool finDeTourPioche;// Code du bushido

public:
    CPerma(std::string name, PermanentType type, int DegatSupplementaire, int DifficulterDataque, int Armesupplementaire, int PlacementDeCarte, bool finDeTourPioche);
	~CPerma();
	PermanentType getType();
	int getDegatSupplementaire();
	int getDifficulterDataque();
	int getArmesupplementaire();
	int getPlacementDeCarte();
	bool getFinDeTourPioche();

	void setType(PermanentType type);
	void setDegatSupplementaire(int DegatSupplementaire);
	void setDifficulterDataque(int DifficulterDataque);
	void setArmesupplementaire(int Armesupplementaire);
	void setPlacementDeCarte(int PlacementDeCarte);
	void setFinDeTourPioche(bool finDeTourPioche);
};