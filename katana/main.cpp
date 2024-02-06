#include <iostream>
#include <string>
#include "role.h"
#include "perso.h"


int main() {
    Role myRole("Kenshin", 100, 1, 5);
    std::cout << "Role Name: " << myRole.getName() << std::endl;
    std::cout << "Honor: " << myRole.getHonor() << std::endl;
    std::cout << "Camp: " << myRole.getCamp() << std::endl;
    std::cout << "Stars: " << myRole.getStars() << std::endl;

    // perso
    perso myPerso(100, 1);  
    // afficher les pv et capaciter speciale
    std::cout << "PV: " << myPerso.getPv() << std::endl;
    std::cout << "Capaciter Speciale: " << myPerso.getCapaciterSpeciale() << std::endl;

    return 0;
}
