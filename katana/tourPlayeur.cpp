#include "tourPlayeur.h"
#include "playeur.h"
#include <iostream>
#include <vector>
#include "Carte.h"
#include "Jeu.h"
#include <string>
#include <algorithm>


using namespace std;

void attententRepPlayer(std::vector<Playeur> playeurs, std::vector<Carte> deck, Jeu game)
{
	while (true) {
		int rep;
		int i = 0;
		while (i < playeurs.size())
		{
			random_shuffle(deck.begin(), deck.end());
			cout << "Joueur " << i << " : " << playeurs[i].getName() << " est en train de jouer" << endl;
			// afficher les cartes du joueur
			cout << "L'id du joueur " << i + 1 << " est : " << playeurs[i].getId() << endl;
			cout << "Deck du joueur " << i + 1 << ": ";
			vector<Carte> deckplayeur = playeurs[i].getDeckPlayer();
			for (size_t j = 0; j < deckplayeur.size(); ++j) {
				cout << deckplayeur[j].getName() << " ";
			}
			
			cout << endl;

			int l = 1;
			for (size_t k = 0; k < deckplayeur.size(); k++)
			{
				cout << "pour jouer la cart " << ": " << deckplayeur[k].getName() << " entrer " << l << endl;
				l++;
			}


			cin >> rep;

			if (rep == deckplayeur.size() + 1 || deckplayeur.empty())
			{
				vector<Carte> deckplayeur = piocherCarte(deck, playeurs[i], game);
				//aficher la carte piocher depuit le deck du joueur
				
				cout << "Le joueur " << playeurs[i].getName() << " a piocher la carte " << playeurs[i].getDeckPlayer().back().getName() << endl;
				playeurs[i].setDeckPlayer(deckplayeur);
				i++;
			}
			// si le joueur a jouer une carte
			else if (rep >= 1 && rep <= deckplayeur.size())
			{
				// afficher la carte jouer
				if (rep != 1)
				{
					rep -= 1;
				}
				cout << "le joueur " << playeurs[i].getName() << " a jouer la carte " << deckplayeur[rep - 1].getName() << endl;
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
				//piocherCarte(deck, playeurs[i], game);
				cout << "Invalid input. Please enter a number between 1 and " << deckplayeur.size() + 1 << endl;
			}
		}
	}
}

vector<Carte> piocherCarte(std::vector<Carte> deck, Playeur playeur, Jeu game)
{

	std::vector<Carte> deckplayeur = playeur.getDeckPlayer();
	deckplayeur.push_back(deck[0]);
	game.setdeck(deck);
	deck.erase(deck.begin(), deck.begin() + 1);
	// afficher le deck du joueur

	return deckplayeur;

}



