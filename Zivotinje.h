#pragma once


class Zivotinje
{
private:
	int IDZivotinje;
	
public:
	char nazivZivotinje[20];
    Zivotinje() {};
	~Zivotinje() {};
	void setIDZivotinje();
	void setNazivZivotinje();
	int getIDZivotinje();
	char* getNazivZivotinje();
	void postaviZivotinju();

};

