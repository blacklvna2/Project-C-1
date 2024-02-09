#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include "Menu.h"
#include "fonction.h"
#include "NbJoueur.h"
#include "Victoire.h"
#include "role.h"
#include "Playeur.h"
#include "perso.h"
#include "DescPerso.h"
#include "CAttaque.h"
using namespace std;

void main()
{

	Titre();
	Menu();
	Victoire();
	//CAttaque CAttaque("C", 10, 100);
	CAttaque CAttaque1("C", 10, 100);
}