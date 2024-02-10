#pragma once
#include <string>
#include "Carte.h"

enum ActionType {
	CRIEDEGUERRE,
	DAIMYO,
	DIVERSION,
	GEISHA,
	MEDITATION
};

class CAction : public Carte
{
private:
	ActionType type;
	int degat;
	int horreurPoint;
	bool permanent;
	bool Playerviser;
	int pointdevie;
	int nombredecartepiocher;
	bool hasard;

public:
	CAction(std::string name,ActionType type,int degat, int horreurPoint, bool permanent, bool Playerviser, int pointdevie, int nombredecartepiocher, bool hasard);
	~CAction();
	int getDegat();
	int getHorreurPoint();
	bool getPermanent();
	bool getPlayerViser();
	int getPointDeVie();
	int getNombreDeCartePiocher();
	bool getHasard();

	void setDegat(int degat);
	void setHorreurPoint(int horreurPoint);
	void setPermanent(bool permanent);
	void setPlayerViser(bool Playerviser);
	void setPointDeVie(int pointdevie);
	void setNombreDeCartePiocher(int nombredecartepiocher);
	void setHasard(bool hasard);
};

