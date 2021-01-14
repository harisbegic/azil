#pragma once
#include "Zivotinje.h"
#include <istream>
#include <vector>
enum VrstaP { avlijaner=1, labrador=2, bulldog=3 };
class Pas :
    public Zivotinje
{
private:
    VrstaP vrsta;
    std::vector<VrstaP> v;
public:
    Pas();
    int IDpsa;
    char velicina[20];
    int brGodina;
    void setVrsta();
    void setIDpsa();//uslov neki treba staviti
    void setVelicina();
    void setBrGodina();
    int getIDpsa();
    char* getVelicina();
    int getBrGodina();
    VrstaP getVrsta();
    ~Pas() {};
    friend std::istream& operator>>(std::istream& stream, Pas& p);//OPERATORI
    friend std::ostream& operator<<(std::ostream& stream, Pas& p);
};

