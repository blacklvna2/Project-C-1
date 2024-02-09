#include <iostream>
#include "NbJoueur.h"
#include "fonction.h"
#include "playeur.h"
using namespace std;
int getNumberOfPlayers() {
    int numPlayers;
    cout << "Entrez le nombre de joueurs (entre 3 et 7) : ";
    numPlayers = EntreNombre();
    while (numPlayers < 3 || numPlayers > 7) {
        cout << "Le nombre de joueurs doit être entre 3 et 7. Réessayez : ";
        numPlayers = EntreNombre();
    }
    return numPlayers;
}

vector<string> askPlayerNames(int numPlayers) {
    vector<string> playerNames;
    string playerName;
    for (int i = 0; i < numPlayers; ++i) {
        cout << "Entrez le nom du joueur " << i + 1 << " : ";
        playerName = Entre();
        playerNames.push_back(playerName);


    }
    return playerNames;
}

void displayPlayerNames(const vector<string>& playerNames) {
    cout << "\nLes noms des joueurs sont :\n";
    for (size_t i = 0; i < playerNames.size(); ++i) {
        cout << "Joueur " << i + 1 << ": " << playerNames[i] << endl;
    }
}

void InitialisationJoueur() {
    int numPlayers = getNumberOfPlayers();
    vector<string> playerNames = askPlayerNames(numPlayers);
    displayPlayerNames(playerNames);
    cout << "Il y aura " << NbCarte(numPlayers)[0] << " shogun, " << NbCarte(numPlayers)[1] << " samouraïs, " << NbCarte(numPlayers)[2] << " ronin et " << NbCarte(numPlayers)[3] << " ninjas" << endl;

}



vector<int> NbCarte(int numPlayers){
    vector<int> liste;
    switch (numPlayers) {
    case 3:
        liste = { 1, 0, 0, 2 }; // 1 shogun, 0 samouraï, 0 ronin, 2 ninjas
        break;
    case 4:
        liste = { 1, 1, 0, 2 }; // 1 shogun, 1 samouraï, 0 ronin, 2 ninjas
        break;
    case 5:
        liste = { 1, 1, 1, 2 }; // 1 shogun, 1 samouraï, 1 ronin, 2 ninjas
        break;
    case 6:
        liste = { 1, 1, 1, 3 }; // 1 shogun, 1 samouraï, 1 ronin, 3 ninjas
        break;
    case 7:
        liste = { 1, 2, 1, 3 }; // 1 shogun, 2 samouraïs, 1 ronin, 3 ninjas
        break;
    default:
        // Gérer les autres cas si nécessaire
        break;
    }
    return liste;
}


vector<string> rolesPlayer(int numPlayers)
{
    vector<string> liste;
    switch (numPlayers) {
    case 3:
        liste = { "shogun", "ninja", "ninja" };
        break;
    case 4:
        liste = { "shogun", "samouraï", "ninja", "ninja" };
        break;
    case 5:
        liste = { "shogun", "samouraï", "ronin", "ninja", "ninja" };
        break;
    case 6:
        liste = { "shogun", "samouraï", "ronin", "ninja", "ninja", "ninja" };
        break;
    case 7:
        liste = { "shogun", "samouraï", "samouraï", "ronin", "ninja", "ninja", "ninja" };
        break;
    }
    return liste;
}
   

    int randomRoles(vector<string> liste) {
        int i = 0;
		while (liste.size() > 0) {
			int random = rand() % liste.size();
			cout << liste[random] << endl;
			liste.erase(liste.begin() + random);
            i = random;
		}
        return i;
	}

    void showRoles(){
        vector<string> nomPlayers = askPlayerNames(getNumberOfPlayers());
        vector<string> listeRoles = rolesPlayer(getNumberOfPlayers());
        int valrandom = randomRoles(listeRoles);
        for (int i = 0; i < nomPlayers.size(); i++) {
			cout << nomPlayers[i] << " a le role de " << listeRoles[valrandom] << endl;

		}

    }
