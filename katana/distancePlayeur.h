#include <vector>
#include "jeu.h"
#include "Playeur.h"

// calculateur de distence entre deux joueurs

int distance(std::vector<Playeur> playeurs, int a, int b);
int distanceBase(int a, int b);
// paramatre: vector des joueurs, id du joueur qui vise, id du joueur visé
int distanceCalculePositif(std::vector<Playeur> playeurs , int a, int b);
int distanceCalculeNegatif(std::vector<Playeur> playeurs,int a,  int b);