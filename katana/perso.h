#pragma once
#include <iostream>
#include <string>

enum PersoType
{
    HANZO,
    USHIWAKA,
    CHYOME,
    HIDEYOSHI,
    GINCHIYO,
    GOEMON,
    NOBUNAGA,
    TOMOE,
    IEYASU,
    BENKEI,
    MUSASHI,
    KOJIRO,

};
class Perso
{
private:
    std::string name;
    int pv;
    int capaciter_speciale;

public:
    Perso();
    Perso(std::string name,PersoType type, int pv, int capaciter_speciale);
    std::string getName();
    int getPv();
    int getCapaciterSpeciale();
    void setPersoName(std::string name);
    void setPv(int pv);
    void setCapaciterSpeciale(int capaciter_speciale);
    ~Perso();
};

