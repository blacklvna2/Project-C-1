#include "tourPlayeur.h"
#include "playeur.h"
#include <iostream>
#include <vector>
#include "Carte.h"
#include "Jeu.h"
#include "Fonction.h"


using namespace std;

void attententRepPlayer(vector<Playeur> playeurs, Jeu game)
{
    int i = 0;
    while (i < game.getnbplayer()) // Change condition from <= to <
    {
        cout << "Joueur " << i + 1 << " : " << playeurs[i].getName() << " est en train de jouer" << endl;
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
        cout << "pour piocher une carte entrer " << piocher << endl;
        
        int rep = EntreNombre();
        if (rep ==  piocher) 
        {
            piocherCarte(game.getdeck(), playeurs[i], game);
            cout << "Le joueur " << playeurs[i].getName() << " a piocher une carte" << endl;
        }
        else {
        // si le joueur a jouer une carte
            if (rep >= 1 && rep <= deckplayeur.size())
            {
                cout << "le joueur " << playeurs[i].getName() << " a jouer la carte " << deckplayeur[rep - 1].getName() << endl;
                // jouer la carte
                /*
                    todo: effectuer l'action de la carte
                */
                // suprimer la carte du deck
                deckplayeur.erase(deckplayeur.begin() + rep - 1); // Subtract 1 from rep to access the correct index
                // mettre a jour le deck du joueur
                playeurs[i].setDeckPlayer(deckplayeur);
            }
            else
            {
                //piocherCarte(deck, playeurs[i], game);
                cout << "Invalid input. Please enter a number between 1 and " << deckplayeur.size() + 1  << endl;
            }
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
