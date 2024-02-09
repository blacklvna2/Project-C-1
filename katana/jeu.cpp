#include "jeu.h"
#include <iostream>
#include <string>
#include <list>

jeu::jeu(int nbplayeur)
{
		nbplayer = 0;
		Role = {""}
		Personnage = {""}

}

jeu::~jeu()
{
}

int jeu::getnbplayer()
{
	return nbplayer;
}

void jeu::getrole()
{
	/*returne liste des role*/
	return;
}

void jeu::getpersonnage()
{
}

void jeu::setnbplayer(int nbplayer)
{
	this->nbplayer = nbplayer;
}

void jeu::setrole()
{
}

void jeu::setpersonnage()
{
}

/* atribut of class*/
// entier joueurnb
// liste cart pour la piche
// liste cart deffoce
// liste role
// liste personnage
