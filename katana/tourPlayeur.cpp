#include "tourPlayeur.h"
#include "playeur.h"
#include <iostream>
#include <vector>

using namespace std;

void attententRepPlayer(std::vector<Playeur> playeurs)
{
	int rep;
	int i = 0;
	while (i < playeurs.size())
	{
		cout << "Joueur " << i << " : " << playeurs[i].getName() << " est en train de jouer" << endl;
		cout << "Entrez 1 pour continuer" << endl;
		// afficher les cartes du joueur
		cout << "L'id du joueur " << i + 1 << " est : " << playeurs[i].getId() << endl;
		cout << "Deck du joueur " << i + 1 << ": ";
		vector<Carte> deckplayeur = playeurs[i].getDeckPlayer();
		for (size_t j = 0; j < deckplayeur.size(); ++j) {
			cout << deckplayeur[j].getName() << " ";
		}
		cout << endl;
		cin >> rep;
		if (rep == 1)
		{
			i++;
		}
	}
	attententRepPlayer(playeurs);

}
