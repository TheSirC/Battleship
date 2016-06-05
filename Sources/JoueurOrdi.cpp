#include "../Headers/JoueurOrdi.h"
#include <stdlib.h> // pour la fonction rand()

void JoueurOrdi::ChoixCible(int nbLignes, int nbColonnes)
{
	CibleX_ = rand() % (nbColonnes) + 1; //le +1 pour partir de la colonne 1
	CibleY_ = rand() % (nbLignes) + 1;
}