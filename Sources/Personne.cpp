#include "../Headers/Personne.h"
#include "../Headers/Bateau.h"

#include <stdlib.h>


Personne::Personne(const string &nom, int nbBateaux)
{
	nbBateaux_ = nbBateaux;
	nom_ = nom;
	flotte_.resize(nbBateaux_);
}

void Personne::ajouterBateau()
{
}

void Personne::ChoixCible()
{
}




