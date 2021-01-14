#pragma once
#include "Zivotinje.h"
#include <istream>
enum VrstaM{avlijanerka, sijamska, perzijska};
class Macka :
    public Zivotinje
{
    int IDmacke;  
    char boja[20];
    int brGodina;
    VrstaM vrsta;
    void setIDmacke();
    void setBoju();
    void setBrGodina();
    void setVrsta();
    int getIDmacke();
    char* getBoja();
    int getBrGodina();
    VrstaM getVrsta();
    friend std::istream& operator>>(std::istream& stream, Macka& m);//OPERATORI 
    friend std::ostream& operator<<(std::ostream& stream, Macka& m);
};

