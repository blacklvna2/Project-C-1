#include <iostream>
#include <string>
#include <regex>
#include <windows.h>
#include "Fonction.h"
#include "playeur.h"
#include "perso.h"
#include "role.h"
#include "initgame.h"
#include "Carte.h"
#include "Jeu.h"
#include "distancePlayeur.h"
#include "tourPlayeur.h"

using namespace std;

string Entre()
{
    string entre;
    cin >> entre;

    // Vérifier si l'entrée contient uniquement des lettres et des chiffres
    regex pattern("[a-zA-Z0-9]+");
    if (regex_match(entre, pattern))
    {
        return entre;
    }
    else
    {
        SetConsoleOutputCP(1252);
        cout << "Erreur : l'entrée contient des caractères non autorisés" << endl;
        return Entre(); // Correction: Ajouter le mot-clé "return" avant l'appel récursif à Entre()
    }
}

int EntreNombre()
{
    string entre;
    cin >> entre;

    // Vérifier si l'entrée contient uniquement des chiffres
    regex pattern("[0-9]+");
    if (regex_match(entre, pattern))
    {
        return stoi(entre);
    }
    else
    {
        SetConsoleOutputCP(1252);
        cout << "Erreur : l'entrée contient des caractères non autorisés" << endl;
        return EntreNombre(); // Correction: Ajouter le mot-clé "return" avant l'appel récursif à Entrenombre()
    }
}

int Menu()
{
    int choix = 0;
    string entre;
    SetConsoleOutputCP(1252);
    cout << "veuillez choisir une option : \n \n1: Jouer au jeu \n2: Lire les règles \n3: Quitter le jeu" << endl;
    choix = EntreNombre(); // d'abord vérifier si entre est un chiffre

    switch (choix) // en int
    {
    case 1:
    {
        SetConsoleOutputCP(1252);
        cout << "Vous avez choisi de jouer au jeu" << endl;
        InitialisationJoueur();
        break;
    }
    case 2:
    {
        SetConsoleOutputCP(1252);
        cout << "Vous avez choisi de lire les règles" << endl;
        system("start http://jeuxstrategie1.free.fr/jeu_katana/regle.pdf");
        Menu();
        break;
    }
    case 3:
    {
        SetConsoleOutputCP(1252);
        cout << "Vous avez choisi de quitter le jeu" << endl;
        break;
    }
    default:
    {
        SetConsoleOutputCP(1252);
        cout << "Vous n'avez pas choisi une option valide" << endl;
        Menu();
        break;
    }
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

void Victoire()
{
    // Séquence d'échappement ANSI pour changer la couleur du texte en vert brillant
    cout << "\033[1;32m";
    cout << " __      ___      _        _          \n"
        " \\ \\    / (_)    | |      (_)         \n"
        "  \\ \\  / / _  ___| |_ ___  _ _ __ ___ \n"
        "   \\ \\/ / | |/ __| __/ _ \\| | '__/ _ \\\n"
        "    \\  /  | | (__| || (_) | | | |  __/\n"
        "     \\/   |_|\\___|\\__\\___/|_|_|  \\___|" << endl;
    cout << "\033[0m";
}

int nbPlayers() {
    
    cout << "Entrez le nombre de joueurs (de 3 à 7) : ";
    int numPlayers = EntreNombre();
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
    
    
    attententRepPlayer(playeurs, deck, game);
    

    // calcule de la distance entre les joueurs de facon circulaire
    //int c = distance(playeurs, 1, 5);
    //cout << "La distance entre les joueurs 1 et 2 est : " << c << endl;
}
