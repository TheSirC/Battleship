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


void JoueurHumain::ajouterBateau(int cX1, int cY1, int cX2, int cY2, Personne Joueur, int i)
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