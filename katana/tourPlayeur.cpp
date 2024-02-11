#include "tourPlayeur.h"
#include "playeur.h"
#include <iostream>
#include <vector>
#include "Carte.h"
#include "Jeu.h"


using namespace std;

void attententRepPlayer(std::vector<Playeur> playeurs)
{
	int rep;
	int i = 0;
	while (i < playeurs.size())
	{
		cout << "Joueur " << i << " : " << playeurs[i].getName() << " est en train de jouer" << endl;
		// afficher les cartes du joueur
		cout << "L'id du joueur " << i + 1 << " est : " << playeurs[i].getId() << endl;
		cout << "Deck du joueur " << i + 1 << ": ";
		vector<Carte> deckplayeur = playeurs[i].getDeckPlayer();
		for (size_t j = 0; j < deckplayeur.size(); ++j) {
			cout << deckplayeur[j].getName() << " ";
		}
		cout << endl;
		cout << "Entrez 1 pour continuer" << endl;
		// afficher 1 carte du deckplayeur
		int l = 1;
		for (size_t k = 0; k < deckplayeur.size(); k++)
		{
		cout << "pour jouer la cart " << ": " << deckplayeur[k].getName() << " entrer " << l << endl;
		l++;
		}


		cin >> rep;


		// si le joueur a jouer une carte
		if (rep >= 1 && rep <= deckplayeur.size())
		{
				// afficher la carte jouer
			if (rep != 1)
			{
				rep -= 1;
			}
				cout << "le joueur " << playeurs[i].getName() << " a jouer la carte " << deckplayeur[rep].getName() << endl;
				// jouer la carte
				
				/*
					todo: effectuer l'action de la carte
				*/

				// suprimer la carte du deck
				deckplayeur.erase(deckplayeur.begin() + rep - 1);
				// mettre a jour le deck du joueur
				playeurs[i].setDeckPlayer(deckplayeur);
				i++;
		}
		else
		{
			cout << "Invalid input. Please enter a number between 1 and " << deckplayeur.size() << endl;
		}
	}
	attententRepPlayer(playeurs);
}

void piocherCarte(std::vector<Carte> deck, Playeur playeur, Jeu game)
{
	// piocher une carte
	// fais la finction ajouter la carte au deck du joueur
	playeur.getDeckPlayer().push_back(deck[0]);
	// afficher la carte piocher
	cout << "Le joueur " << playeur.getName() << " a piocher la carte " << deck[0].getName() << endl;
	// suprimer la carte du deck
	deck.erase(deck.begin());
	// mettre a jour le deck du jeu
	game.setdeck(deck);
}



