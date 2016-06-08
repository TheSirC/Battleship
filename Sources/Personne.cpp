#include "../Headers/Personne.h"
#include "../Headers/Bateau.h"
//#include "../Headers/GrilleGraphique.h" //appel de grille?
#include <stdlib.h>


Personne::Personne(const string &nom, int nbBateaux)
{
	nbBateaux_ = nbBateaux;
	nom_ = nom;
	flotte_.resize(nbBateaux_);
}




