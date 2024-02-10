#include <iostream>
#include <string>
#include <vector>
#include <list>
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
#include "Jeu.h"
#include "CAction.h"
#include "CPerma.h"
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

Playeur playeur1("Kenshin", "Vivant", role1, perso1);
Playeur playeur2("Kaito", "Vivant", role2, perso2);
Playeur playeur3("Kazuma", "Vivant", role3, perso3);

// ajoute les playeur a la liste
std::list<Playeur> playeurs;
playeurs.push_back(playeur1);
playeurs.push_back(playeur2);
playeurs.push_back(playeur3);

// affiche mois cette liste
std::list<Playeur>::iterator it3;
for (it3 = playeurs.begin(); it3 != playeurs.end(); it3++)
{
	std::cout << it3->getName() << std::endl;
}

// conte le nombre de playeur
std::cout << "le nombre de playeur est: " << playeurs.size() << std::endl;
// fais moi un jeu
Jeu jeu(playeurs.size(), personnages, roles);
std::cout << jeu.getnbplayer() << std::endl;

// fais moi des cart action
CAction CAction1("test", BATTLE_CRY, 10, 10, true, true, 10, 10, true);

std::cout << CAction1.getName() << std::endl;
std::cout << CAction1.getDegat() << std::endl;
std::cout << CAction1.getHorreurPoint() << std::endl;
std::cout << CAction1.getPermanent() << std::endl;
std::cout << CAction1.getPlayerViser() << std::endl;
std::cout << CAction1.getPointDeVie() << std::endl;
std::cout << CAction1.getNombreDeCartePiocher() << std::endl;
std::cout << CAction1.getHasard() << std::endl;

// fais moi des cart attaque

CAttaque CAttaque1("test", 10, 10);
std::cout << CAttaque1.getName() << std::endl;
std::cout << CAttaque1.getDegat() << std::endl;
std::cout << CAttaque1.getPrecision() << std::endl;

// fais moi une carte permanente
CPerma CartePermanente1("Cart", ARMURE, 0, 0, 1, 1, true);
std::cout << CartePermanente1.getName() << std::endl;
std::cout << CartePermanente1.getDegatSupplementaire() << std::endl;
std::cout << CartePermanente1.getDifficulterDataque() << std::endl;
std::cout << CartePermanente1.getArmesupplementaire() << std::endl;
std::cout << CartePermanente1.getPlacementDeCarte() << std::endl;
std::cout << CartePermanente1.getFinDeTourPioche() << std::endl;


// fais moi une carte attaque
CAttaque CarteAttaque1("Cart", 10, 10);
std::cout << CarteAttaque1.getName() << std::endl;
std::cout << CarteAttaque1.getDegat() << std::endl;
std::cout << CarteAttaque1.getPrecision() << std::endl;







return 0;
}