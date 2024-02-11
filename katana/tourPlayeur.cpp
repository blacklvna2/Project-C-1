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
		cin >> rep;
		i++;
	}
	attententRepPlayer(playeurs);

}
