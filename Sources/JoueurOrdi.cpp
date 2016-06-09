#include "../Headers/JoueurOrdi.h"
#include <stdlib.h> // pour la fonction rand()

JoueurOrdi::JoueurOrdi(const string &nom, int NbBateaux) : Personne(nom, 6)
{

}

void JoueurOrdi::ChoixCible(int nbLignes, int nbColonnes)
{
	CibleX_ = rand() % (nbColonnes) ; // Fonction qui choisie une colonne aléatoirement (coordonée X)
	CibleY_ = rand() % (nbLignes) ; // Fonction qui choisie une lugne aléatoirement (coordonée Y)
}

void JoueurOrdi::ajouterBateau(int cX1, int cY1, int cX2, int cY2, int i)//
{
	getFlotte().at(i).setPositionX(cX1);
	getFlotte().at(i).setPositionY(cY1);
	if (cX1 >= cX2)
	{
		getFlotte().at(i).setOrientation(3);
	}
	else if (cY1 >= cY2)
	{
		getFlotte().at(i).setOrientation(2);
	}
	else if (cY1 < cY2)
	{
		getFlotte().at(i).setOrientation(0);
	}
	else
	{
		getFlotte().at(i).setOrientation(1);
	}
}
