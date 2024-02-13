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

    // V�rifier si l'entr�e contient uniquement des lettres et des chiffres
    regex pattern("[a-zA-Z0-9]+");
    if (regex_match(entre, pattern))
    {
        return entre;
    }
    else
    {
        SetConsoleOutputCP(1252);
        cout << "Erreur : l'entr�e contient des caract�res non autoris�s" << endl;
        return Entre(); // Correction: Ajouter le mot-cl� "return" avant l'appel r�cursif � Entre()
    }
}

int EntreNombre()
{
    string entre;
    cin >> entre;

    // V�rifier si l'entr�e contient uniquement des chiffres
    regex pattern("[0-9]+");
    if (regex_match(entre, pattern))
    {
        return stoi(entre);
    }
    else
    {
        SetConsoleOutputCP(1252);
        cout << "Erreur : l'entr�e contient des caract�res non autoris�s" << endl;
        return EntreNombre(); // Correction: Ajouter le mot-cl� "return" avant l'appel r�cursif � Entrenombre()
    }
}

int Menu()
{
    int choix = 0;
    string entre;
    SetConsoleOutputCP(1252);
    cout << "veuillez choisir une option : \n \n1: Jouer au jeu \n2: Lire les r�gles \n3: Quitter le jeu" << endl;
    choix = EntreNombre(); // d'abord v�rifier si entre est un chiffre

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
        cout << "Vous avez choisi de lire les r�gles" << endl;
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
    // S�quence d'�chappement ANSI pour changer la couleur du texte en cyan brillant
    cout << "\033[1;36m";

    // Afficher le texte du titre
    cout << "  _  __     _                    \n"
        " | |/ /    | |                   \n"
        " | ' / __ _| |_ __ _ _ __   __ _ \n"
        " |  < / _` | __/ _` | '_ \\ / _` |\n"
        " | . \\ (_| | || (_| | | | | (_| |\n"
        " |_|\\_\\__,_|\\__\\__,_|_| |_|\\__,_|\n"
        "                                 \n" << endl;

    // S�quence d'�chappement ANSI pour r�initialiser la couleur du texte
    cout << "\033[0m";
}

void Victoire()
{
    // S�quence d'�chappement ANSI pour changer la couleur du texte en vert brillant
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
    
    cout << "Entrez le nombre de joueurs (de 3 � 7) : ";
    int numPlayers = EntreNombre();
    while (numPlayers < 3 || numPlayers > 7) {
        cout << "Le nombre de joueurs doit �tre compris entre 3 et 7. Entrez � nouveau le nombre de joueurs : ";
        cin >> numPlayers;
    }
    return numPlayers;
}

//void InitialisationJoueur() {
//
//    int numPlayers = nbPlayers();
//    vector<Perso> personnages = initialisationPersonnage();
//    vector<Carte> deck = InitialisationDeck();
//    vector<Role> roles = InitialisationRole(numPlayers);
//
//    //shuffule
//    random_shuffle(roles.begin(), roles.end());
//
//    // stockage des decks
//    Jeu game(numPlayers, personnages, roles, deck);
//    vector<Playeur> playeurs;
//    string playerName;
//    for (int i = 0; i < numPlayers; ++i) {
//        cout << "Entrez le nom du joueur " << i + 1 << " : ";
//        playerName = Entre();
//        Playeur player(playerName, "up", game.getroles()[i], game.getpersonnages()[i], deck, i);
//        playeurs.push_back(player);
//        cout << "Le joueur " << player.getName() << " a �t� ajout�." << endl;
//    }
//
//    int players = numPlayers;
//    // Afficher les joueurs avec leur r�le et leur personnage
//    for (size_t i = 0; i < playeurs.size(); ++i) {
//        // R�cup�rer le r�le et le personnage du joueur i
//        Role role = playeurs[i].getRole();
//        Perso perso = playeurs[i].getPerso();
//
//        // Initialiser le deck du joueur i
//        InitialisationDeckPlayer(deck, role.getRoleName(), playeurs[i].getId(), playeurs[i]);
//
//        // R�cup�rer le deck du joueur i
//        vector<Carte> deckplayeur = playeurs[i].getDeckPlayer();
//
//        // Si le joueur a le r�le de Shogun, le mettre en premi�re position
//        if (role.getRoleName() == "Shogun" && i != 0) { // V�rifier si le joueur n'est pas d�j� en premi�re position
//            std::swap(playeurs[0], playeurs[i]);
//        }
//
//        // Afficher l'identifiant du joueur
//        cout << "L'id du joueur " << i + 1 << " est : " << playeurs[i].getId() << endl;
//
//        // Afficher le nom du joueur, son r�le et son personnage
//        cout << "Joueur " << i + 1 << ": " << playeurs[i].getName() << " a le r�le de " << role.getRoleName() << " et le personnage " << perso.getName() << endl;
//
//        // Afficher le deck du joueur i
//        cout << "Deck de " << playeurs[i].getName() << ": ";
//        for (size_t j = 0; j < deckplayeur.size(); ++j) {
//            cout << deckplayeur[j].getName() << " ";
//        }
//        cout << endl;
////    }
//attententRepPlayer(playeurs, deck, game);
//    
//
//    // calcule de la distance entre les joueurs de facon circulaire
//    //int c = distance(playeurs, 1, 5);
//    //cout << "La distance entre les joueurs 1 et 2 est : " << c << endl;
//}
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
        cout << "Le joueur " << player.getName() << " a �t� ajout�." << endl;
    }

    // Afficher les joueurs avec leur r�le et leur personnage
    for (size_t i = 0; i < playeurs.size(); ++i) {
        // R�cup�rer le r�le et le personnage du joueur i
        Role role = playeurs[i].getRole();
        Perso perso = playeurs[i].getPerso();

        // Initialiser le deck du joueur i
        InitialisationDeckPlayer(deck, role.getRoleName(), playeurs[i].getId(), playeurs[i]);

        // R�cup�rer le deck du joueur i
        vector<Carte> deckplayeur = playeurs[i].getDeckPlayer();

        //// Afficher l'identifiant du joueur
        //cout << "L'id du joueur " << i + 1 << " est : " << playeurs[i].getId() << endl;

        //// Afficher le nom du joueur, son r�le et son personnage
        //cout << "Joueur " << i + 1 << ": " << playeurs[i].getName() << " a le r�le de " << role.getRoleName() << " et le personnage " << perso.getName() << endl;

        //// Afficher le deck du joueur i
        //cout << "Deck de " << playeurs[i].getName() << ": ";
        //for (size_t j = 0; j < deckplayeur.size(); ++j) {
        //    cout << deckplayeur[j].getName() << " ";
        //}
        //cout << endl;

        // Si le joueur a le r�le de Shogun, le mettre en premi�re position
        if (role.getRoleName() == "Shogun" && i != 0) { // V�rifier si le joueur n'est pas d�j� en premi�re position
            std::swap(playeurs[0], playeurs[i]);
            cout << "Le joueur " << playeurs[0].getName() << " a le r�le de Shogun et est en premi�re position." << endl;
            // Inverser les ID du Shogun et du premier joueur
            int tempId = playeurs[0].getId();
            playeurs[0].setId(playeurs[i].getId());
            playeurs[i].setId(tempId);
        }


    }

    // La suite de votre fonction...
    attententRepPlayer(playeurs, deck, game);
}
