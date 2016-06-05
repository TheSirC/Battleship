#include "../Headers/Personne.h"
#include "../Headers/Bateau.h"
#include "../Headers/GrilleGraphique.h" //appel de grille?


Personne::Personne(const string nom, int nbBateaux)
{
	nbBateaux_ = nbBateaux;
	nom_ = nom;
	flotte_.resize(nbBateaux_);
}


void Personne::ajouterBateau(int cX1, int cY1, int cX2, int cY2, Personne Joueur,int i)
{
	int clicX1 = Grille.coordonnesClic[0], clicY1 = Grille.coordonnesClic[1];// faire correspondre
	Joueur.flotte_[i].setPositionX(clicX1);
	Joueur.flotte_[i].setPositionY(clicY1);
	cout << "Selectionnez l'orientation du bateau." << endl;
	int clicX2 = Grille.coordonnesClic[0], clicY2 = Grille.coordonnesClic[1];
	if (clicX1 >= clicX2)
	{
		Joueur.flotte_[i].setOrientation(3);
	}
	else if (clicY1 >= clicY2)
	{
		Joueur.flotte_[i].setOrientation(2);
	}
	else if (clicY1 < clicY2)
	{
		Joueur.flotte_[i].setOrientation(0);
	}
	else
	{
		Joueur.flotte_[i].setOrientation(1);
	}
}

