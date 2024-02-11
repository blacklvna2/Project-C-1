#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "NbJoueur.h"
#include "fonction.h"
#include "playeur.h"
#include "perso.h"
#include "role.h"
#include "initgame.h"
#include "Carte.h"
#include "Jeu.h"
#include "distancePlayeur.h"

using namespace std;

int nbPlayers() {
	int numPlayers;
	cout << "Entrez le nombre de joueurs (de 3 à 7) : ";
	cin >> numPlayers;
    while (numPlayers < 3 || numPlayers > 7) {
		cout << "Le nombre de joueurs doit être compris entre 3 et 7. Entrez à nouveau le nombre de joueurs : ";
		cin >> numPlayers;
	}
	return numPlayers;
}



void InitialisationJoueur() {
    
    int numPlayers = nbPlayers();
    vector<Perso> personnages = initialisationPersonnage();
    vector<Carte> deck = InitialisationDeck();
    vector<Role> roles = InitialisationRole(numPlayers);

    //shuffule
    random_shuffle(roles.begin(), roles.end());
    
    // stockage des decks
    Jeu game(numPlayers, personnages, roles, deck);
    vector<Playeur> playeurs;
    string playerName;
    for (int i = 0; i < numPlayers; ++i) {
        cout << "Entrez le nom du joueur " << i + 1 << " : ";
        playerName = Entre();
        Playeur player(playerName, "up", game.getroles()[i], game.getpersonnages()[i], deck, i);
        playeurs.push_back(player);
        cout << "Le joueur " << player.getName() << " a été ajouté." << endl;
    }

    int players = numPlayers;
    // afficher les joueurs avec leur rôle et leur personnage
    for (size_t i = 0; i < playeurs.size(); ++i) {
        Role role = playeurs[i].getRole();
        Perso perso = playeurs[i].getPerso();
        InitialisationDeckPlayer(deck, role.getRoleName(), playeurs[i].getId(), playeurs[i]);
        vector<Carte> deckplayeur = playeurs[i].getDeckPlayer();
        cout << "L'id du joueur " << i + 1 << " est : " << playeurs[i].getId() << endl;

        cout << "Joueur " << i + 1 << ": " << playeurs[i].getName() << " a le rôle de " << role.getRoleName() << " et le personnage " << perso.getName() << endl;
        
        cout << "Deck du joueur " << i + 1 << ": ";
        for (size_t j = 0; j < deckplayeur.size(); ++j) {
            cout << deckplayeur[j].getName() << " ";
        }
        cout << endl;
    }

    // calcule de la distance entre les joueurs de facon circulaire
    int c = distance(playeurs, 5, 1);
    cout << "La distance entre les joueurs 1 et 2 est : " << c << endl;




}




    
