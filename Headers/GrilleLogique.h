#include <vector>
#include <iostream>

#include "bateau.h"

using namespace std;

#ifndef _GRILLELOGIQUE_
#define _GRILLELOGIQUE_

class GrilleLogique
{
		int nombreLignes_ = 10, nombreColonnes_ = 10;
		int** Grille_; // Pointeur vers la grille 2D

public:
		GrilleLogique(int nombreLignes_ = 10, int nombreColonnes_= 10);
		~GrilleLogique();

		int getEtatCase(int x, int y); // Retourne l'�tat de la case donn�e en param�tre : 1 -> Mer, 2 -> Mer touch�e, 3 -> Bateau d�couvert, 4 -> Bateau touch� 
		int** getGrille() { return Grille_; }
		void setEtatCase(int x, int y, int Etat); // D�finis l'�tat de la case donn�e en param�tre : 1 -> Mer, 2 -> Mer touch�e, 3 -> Bateau d�couvert, 4 -> Bateau touch� 

		void GrilleLogique::ajouterBateau(Bateau BateauAAjouter);
		bool tireSurCase(int x, int y); // Renvoi de la pr�sence d'un bateau ou non (respectivement 0 ou 1)

		void afficherGrille(); 
};


#endif // !_GRILLELOGIQUE_

