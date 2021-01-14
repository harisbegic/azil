#include "Zivotinje.h"
#include <iostream>
using std::cout;
using std::cin;
void Zivotinje::setIDZivotinje()
{
	cout << "Unesite ID zivotinje: ";
	cin >> this->IDZivotinje;
	cin.ignore();
}

void Zivotinje::setNazivZivotinje()
{
	cout << "Unesite naziv zivotinje: ";
	cin.getline(this->nazivZivotinje, 20);
}

void Zivotinje::postaviZivotinju()
{
	this->setIDZivotinje();
	this->getIDZivotinje();
}

int Zivotinje::getIDZivotinje()
{
	return this->IDZivotinje;
}

char* Zivotinje::getNazivZivotinje()
{
	return this->nazivZivotinje;
}

