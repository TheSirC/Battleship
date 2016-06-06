#include "../Headers/JoueurOrdi.h"
#include <stdlib.h> // pour la fonction rand()

JoueurOrdi::JoueurOrdi() : Personne(const string &nom_, int NbBateaux_)
{

}

void JoueurOrdi::ChoixCible(int nbLignes, int nbColonnes)
{
	CibleX_ = rand() % (nbColonnes) ; //le +1 pour partir de la colonne 1
	CibleY_ = rand() % (nbLignes) ;
}

void JoueurOrdi::ajouterBateau(int nbColonnes, int nbLignes, Personne Ordi, int i)
{
	int clicX1 = rand() % (nbColonnes);
	int clicY1 = rand() % (nbLignes);
	Ordi.flotte_[i].setPositionX(clicX1);
	Ordi.flotte_[i].setPositionY(clicY1);
	int clicX2 = rand() % (nbColonnes);
	int clicY2 = rand() % (nbLignes);
	if (clicX1 >= clicX2)
	{
		Ordi.flotte_[i].setOrientation(3);
	}
	else if (clicY1 >= clicY2)
	{
		Ordi.flotte_[i].setOrientation(2);
	}
	else if (clicY1 < clicY2)
	{
		Ordi.flotte_[i].setOrientation(0);
	}
	else
	{
		Ordi.flotte_[i].setOrientation(1);
	}
}
