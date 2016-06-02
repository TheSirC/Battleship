#include <GrilleLogique.h>




//définition du constructeur
template <class Grille> GrilleLogique<Grille>::GrilleLogique(int nbLignes_, int nbColonnes_)
{
	if (nbLignes_ <= 0)
		nbLignes_ = 1;
	if (nbColonnes_ <= 0)
		nbColonnes_ = 1;

	GrilleLogique_ = new Grille[nbLignes_][nbColonnes_];
}


template <class Grille> GrilleLogique<Grille>::~GrilleLogique()
{
	delete[] GrilleLogique_;
}


