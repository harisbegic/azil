#include "Pas.h"
#include<iostream>
using std::cin;
using std::cout;
Pas::Pas()
{
	this->IDpsa = 0;
	strcpy_s(this->velicina, "0");
	this->brGodina = 0;
}


void Pas::setVrsta()
{
	std::shared_ptr<int> x = std::make_shared<int>();//PAMETNI POKAZIVAC
	do {
		std::cout << "Unesite vrstu psa(1.labrador,2.avlijaner,3.bulldog): "; //?????????
		std::cin >> *x;
	} while (*x < 1 || *x>3);
	std::cin.ignore();
	this->vrsta = VrstaP(*x);
}

void Pas::setIDpsa()
{
	cout << "Unesite ID psa: ";
	cin >> this->IDpsa;
	cin.ignore();
}

void Pas::setVelicina()
{
	cout << "Unesite velicinu psa(mali, veliki)";
	cin.getline(this->velicina, 20);
}

void Pas::setBrGodina()
{
	cout << "Unesite broj godina psa: ";
	cin >> this->brGodina;
}

int Pas::getIDpsa()
{
	return this->IDpsa;
}

char* Pas::getVelicina()
{
	return this->velicina;
}

int Pas::getBrGodina()
{
	return this->brGodina;
}

VrstaP Pas::getVrsta()
{
	return this->vrsta;
}

std::istream& operator>>(std::istream& stream, Pas& p)
{
	p.setNazivZivotinje();
	p.setIDpsa();
	p.setBrGodina();
	p.setVelicina();
	p.setVrsta();
	return stream;
}

std::ostream& operator<<(std::ostream& stream, Pas& p)
{
	stream << p.getNazivZivotinje() << "\n";
	stream << p.getIDpsa() << "\n";
	stream << p.getBrGodina() << "\n";
	stream << p.getVelicina() << "\n";
	stream << p.getVrsta() << "\n";
	return stream;
}
