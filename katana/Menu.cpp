#include "Menu.h"
#include "fonction.h"
#include <iostream>
#include <string>
#include <windows.h>
#include "NbJoueur.h"
using namespace std;
int Menu()
{
	int choix = 0;
	string entre;
	SetConsoleOutputCP(1252);
	cout << "veuillez choisir une option : \n \n1: Jouer au jeu \n2: Lire les règles \n3: Quitter le jeu" << endl;
	choix = EntreNombre();// d'abord verifer si entre est un chiffre

	switch (choix)// en int
	{
	case 1:
	{
		SetConsoleOutputCP(1252);
		cout << "Vous avez choisi de jouer au jeu" << endl;
		InitialisationJoueur();

	}
		break;
	case 2:
	{
		SetConsoleOutputCP(1252);
		cout << "Vous avez choisi de lire les règles" << endl;
		system("start http://jeuxstrategie1.free.fr/jeu_katana/regle.pdf");
		Menu();
	}
		break;
	case 3:
	{
		SetConsoleOutputCP(1252);
		cout << "Vous avez choisi de quitter le jeu" << endl;
	}
		break;
	default:
	{
		SetConsoleOutputCP(1252);
		cout << "Vous n'avez pas choisi une option valide" << endl;
		Menu();
	}
		break;
	}


	return 0;
}
void Titre() {
	// Séquence d'échappement ANSI pour changer la couleur du texte en cyan brillant
	cout << "\033[1;36m";

	// Afficher le texte du titre
	cout << "  _  __     _                    \n"
		" | |/ /    | |                   \n"
		" | ' / __ _| |_ __ _ _ __   __ _ \n"
		" |  < / _` | __/ _` | '_ \\ / _` |\n"
		" | . \\ (_| | || (_| | | | | (_| |\n"
		" |_|\\_\\__,_|\\__\\__,_|_| |_|\\__,_|\n"
		"                                 \n" << endl;




	// Séquence d'échappement ANSI pour réinitialiser la couleur du texte
	cout << "\033[0m";
}

