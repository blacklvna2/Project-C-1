#include "tourPlayeur.h"
#include "playeur.h"
#include <iostream>
#include <vector>
#include "Carte.h"
#include "Jeu.h"
#include "Fonction.h"

using namespace std;

void attententRepPlayer(std::vector<Playeur> playeurs, Jeu game)
{
    int rep;
    int i = 0;
    while (i < game.getnbplayer()) // Change condition from <= to <
    {
        cout << "Joueur " << i + 1 << " : " << playeurs[i].getName() << " est en train de jouer" << endl;
        // afficher les cartes du joueur
        cout << "L'id du joueur " << i + 1 << " est : " << playeurs[i].getId() << endl;
        cout << "Deck du joueur " << i + 1 << ": ";
        vector<Carte> deckplayeur = playeurs[i].getDeckPlayer();
        for (size_t j = 0; j < deckplayeur.size(); ++j) {
            cout << deckplayeur[j].getName() << " ";
        }
        cout << endl;
        // afficher 1 carte du deckplayeur
        int l = 1;
        for (size_t k = 0; k < deckplayeur.size(); k++)
        {
            cout << "pour jouer la carte " << ": " << deckplayeur[k].getName() << " entrer " << l << endl;
            l++;
        }
        int piocher = static_cast<int>(deckplayeur.size()) + 1; // Use static_cast to convert size_t to int
        cout << "pour piocher une carte entrez " << piocher << endl;

        rep << EntreNombre();

        // si le joueur a jouer une carte
        if (rep >= 1 && rep <= static_cast<int>(deckplayeur.size())) // Use static_cast to convert size_t to int
        {
            cout << "le joueur " << playeurs[i].getName() << " a jouer la carte " << deckplayeur[rep].getName() << endl;
            // jouer la carte

            /*
                todo: effectuer l'action de la carte
            */

            // suprimer la carte du deck
            deckplayeur.erase(deckplayeur.begin() + rep);
            // mettre a jour le deck du joueur
            playeurs[i].setDeckPlayer(deckplayeur);
        }
        else
        {
            //piocherCarte(deck, playeurs[i], game);
            if (rep == deckplayeur.size() + 1) // Use static_cast to convert size_t to int
            {
                piocherCarte(game.getdeck(), playeurs[i], game);
            }

            cout << "Invalid input. Please enter a number between 1 and " << deckplayeur.size() + 1  << endl;
        }
        i++;
    }
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



