#include <iostream>
#include <string>
#include "role.h"
#include "perso.h"
#include "playeur.h"


int main() {
    Role myRole("Kenshin", 100, 1, 5);
    Perso myPerso( "dieu" , 10, 1);

    Role myRole("Kenshin", 100, 1, 5);

    // Création d'une liste (vector) de rôles et ajout de l'objet myRole à la liste
    std::vector<Role> listeRoles;
    listeRoles.push_back(myRole);

    // Vous pouvez maintenant accéder aux éléments de la liste comme ceci :
    std::cout << "Nom du premier rôle : " << listeRoles[0].getName() << std::endl;

    return 0;

    // make me a playeur
    Playeur myPlayeur("Kenshin", "up", myRole, myPerso);
    std::cout << "Playeur Name: " << myPlayeur.getName() << std::endl;
    std::cout << "Playeur capa: " << myPlayeur.getPlayeurCapaciterSpeciale() << std::endl;
    //get honner
    std::cout << "Playeur honner: " << myPlayeur.getHonor() << std::endl;
//get pv
std::cout << "Playeur pv: " << myPlayeur.getPlayerPV() << std::endl;
//get getPlayeurCapaciterSpeciale()
    std::cout << "Playeur capa: " << myPlayeur.getPlayeurCapaciterSpeciale() << std::endl;
    return 0;
}
