#pragma once
#include <iostream>
#include <string>

class Perso
{
private:
    std::string name;
    int pv;
    int capaciter_speciale;

public:
    Perso();
    Perso(std::string name, int pv, int capaciter_speciale);
    std::string getName();
    int getPv();
    int getCapaciterSpeciale();
    void setPersoName(std::string name);
    void setPv(int pv);
    void setCapaciterSpeciale(int capaciter_speciale);
    ~Perso();
};

