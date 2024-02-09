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



