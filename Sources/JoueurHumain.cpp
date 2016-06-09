#include "../Headers/JoueurHumain.h"

//Constructeur avec méthode virtuelle
JoueurHumain::JoueurHumain(const string &nom, int NbBateaux) : Personne(nom,6)
{

}

void JoueurHumain::ChoixCible(int CibleX, int CibleY)
{
	CibleX_ = CibleX;
	CibleY_ = CibleY;
}


void JoueurHumain::ajouterBateau(int cX1, int cY1, int cX2, int cY2, int i)
{
	int clicX1 = cX1, clicY1 = cY1;
	getFlotte().at(i).setPositionX(clicX1);
	getFlotte().at(i).setPositionY(clicY1);
	int clicX2 = cX2, clicY2 = cY2;
	if (clicX1 >= clicX2)
	{
		getFlotte().at(i).setOrientation(3);
	}
	else if (clicY1 >= clicY2)
	{
		getFlotte().at(i).setOrientation(2);
	}
	else if (clicY1 < clicY2)
	{
		getFlotte().at(i).setOrientation(0);
	}
	else
	{
		getFlotte().at(i).setOrientation(1);
	}
}