#include "effetCarte.h"
#include <vector>

using namespace std;


void effetAction(Carte carte, Playeur cible, Playeur playeur)
{

}

void effectCartPerma(Carte carte, Playeur playeur, Playeur cible)
{
}

void effectCartePerso(Playeur playeur, Carte carte, Playeur cible)
{
}

void effectCartArme(CArme carte, Playeur playeur, Playeur cible, int distance) {
	if (carte.getPrecision() >= distance && playeur.getStatus() == "up") {
		vector<Carte> tableaucarte = cible.getDeckPlayer();
		Perso persoCible = cible.getPerso();
		for (int i = 0; i <= tableaucarte.size(); i++) {
			if (tableaucarte[i].getName() == "Parade") {
				cout << cible.getName() << ", voulez vous parer l'attaque ? 1: oui 2: non ";
				int rep = EntreNombre();
				cout << endl;
				if (rep == 1) {
					cible.getDeckPlayer().erase(cible.getDeckPlayer().begin() + i);
					cout << "Attaque parée" << endl;
					break;
				}
				else if (rep == 2) {
					persoCible.setPv(persoCible.getPv() - carte.getDegat());
					cout << "Attaque réussie" << endl;
					for (int i = 0; i <= playeur.getDeckPlayer().size(); i++) {
						if (playeur.getDeckPlayer()[i].getName() == carte.getName()) {
							playeur.getDeckPlayer().erase(playeur.getDeckPlayer().begin() + i);
							break;
						}
					}
				}
			}
			else {
				persoCible.setPv(persoCible.getPv() - carte.getDegat());
				cout << "Attaque réussie" << endl;
				for (int i = 0; i <= playeur.getDeckPlayer().size(); i++) {
					if (playeur.getDeckPlayer()[i].getName() == carte.getName()) {
						playeur.getDeckPlayer().erase(playeur.getDeckPlayer().begin() + i);
						break;
					}
				}
			}
		}
	}
	else {
		cout << "Attaque loupée" << endl;
	}
}

