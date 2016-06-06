#include "../Headers/JoueurOrdi.h"
#include <stdlib.h> // pour la fonction rand()


void JoueurOrdi::ChoixCible(int nbLignes, int nbColonnes)
{
	CibleX_ = rand() % (nbColonnes) ; // Fonction qui choisie une colonne aléatoirement (coordonée X)
	CibleY_ = rand() % (nbLignes) ; // Fonction qui choisie une lugne aléatoirement (coordonée Y)
}

void JoueurOrdi::ajouterBateau(int nbColonnes, int nbLignes, int i)//
{
	int clicX1 = rand() % (nbColonnes);
	int clicY1 = rand() % (nbLignes);
	getFlotte()->at(i).setPositionX(clicX1);
	getFlotte()->at(i).setPositionY(clicY1);
	int clicX2 = rand() % (nbColonnes);
	int clicY2 = rand() % (nbLignes);
	if (clicX1 >= clicX2)
	{
		getFlotte()->at(i).setOrientation(3);
	}
	else if (clicY1 >= clicY2)
	{
		getFlotte()->at(i).setOrientation(2);
	}
	else if (clicY1 < clicY2)
	{
		getFlotte()->at(i).setOrientation(0);
	}
	else
	{
		getFlotte()->at(i).setOrientation(1);
	}
}
