#include "distancePlayeur.h"
#include "playeur.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Player {
	int position;
	// Autres attributs du joueur
};

int distance(std::vector<Playeur> playeurs, int a, int b)
{
	int distanceB1 = distanceCalculePositif(playeurs, a, b);
	int distanceB2 = distanceCalculeNegatif(playeurs, a, b);
	return distanceBase(distanceB1, distanceB2);
}

int distanceBase(int a, int b)
{
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int distanceCalculePositif(std::vector<Playeur> players, int a, int b) {
	int distance = 0;
	int currentPlayer = a;
	while (currentPlayer != b) {
		distance++;
		currentPlayer = (currentPlayer + 1) % players.size();
	}
	return distance;
}

int distanceCalculeNegatif(std::vector<Playeur> players, int a, int b) {
	int distance = 0;
	int currentPlayer = a;
	while (currentPlayer != b) {
		distance++;
		currentPlayer = (currentPlayer - 1 + players.size()) % players.size();
	}
	return distance;
}



