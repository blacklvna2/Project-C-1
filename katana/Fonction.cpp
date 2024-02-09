#include "Fonction.h"
#include <iostream>
#include <string>
#include <regex>
#include <windows.h>
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



