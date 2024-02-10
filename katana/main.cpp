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

int main()
{

//Titre();
//Menu();
//Victoire();
// make me a liste of role
Role role1("Samourai", 5, 1, 3);
Role role2("Ninja", 4, 1, 3);
Role role3("Ronin", 3, 1, 3);
Role role4("Geisha", 2, 1, 3);
Role role5("Shogun", 1, 1, 3);

// add role to list
std::list<Role> roles;
roles.push_back(role1);
roles.push_back(role2);
roles.push_back(role3);
roles.push_back(role4);
roles.push_back(role5);

// affiche mois cette liste
std::list<Role>::iterator it;
for (it = roles.begin(); it != roles.end(); it++)
{
	std::cout << it->getRoleName() << std::endl;
}

// make me a liste of perso
Perso perso1("Kenshin", 100, 3);
Perso perso2("Kaito", 100, 3);
Perso perso3("Kazuma", 100, 3);
Perso perso4("Kazuki", 100, 3);
Perso perso5("Kazuya", 100, 3);

// add perso to list
std::list<Perso> personnages;
personnages.push_back(perso1);
personnages.push_back(perso2);
personnages.push_back(perso3);
personnages.push_back(perso4);
personnages.push_back(perso5);

// affiche mois cette liste
std::list<Perso>::iterator it2;
for (it2 = personnages.begin(); it2 != personnages.end(); it2++)
{
	std::cout << it2->getName() << std::endl;
}

// make me a liste of playeur
Playeur playeur1("Kens", 100, perso1, role1);
Playeur playeur2("Kai", 100, perso2, role2);
Playeur playeur3("Kaz", 100, perso3, role3);

return 0;
}