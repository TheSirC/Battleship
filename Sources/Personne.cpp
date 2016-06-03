#include "../Headers/Personne.h"

Personne::Personne(const string nom, int NbBateaux)
{
	NbBateaux_ = NbBateaux;
	nom_ = nom;

}


void Personne::AjouterBateau(Bateau *bat)
{
	ListeBateau_.push_back(bat);
}

int Personne::TourSuivant()
{

}