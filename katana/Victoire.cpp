#include "Victoire.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
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