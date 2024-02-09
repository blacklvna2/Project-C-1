#pragma once
#include <vector>
#include <string>
using namespace std;
int getNumberOfPlayers();
vector<string> askPlayerNames(int numPlayers);
void displayPlayerNames(const vector<string>& playerNames);
void InitialisationJoueur();
vector<int> NbCarte(int numPlayers);

