#include <vector>
#include <iostream>

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


		//int getEtatCase(int x, int y); // Retourne l'état de la case donnée en paramètre : 1 -> Mer, 2 -> Mer touchée, 3 -> Bateau découvert, 4 -> Bateau touché 
		//void setEtatCase(int x, int y, int Etat); // Définis l'état de la case donnée en paramètre : 1 -> Mer, 2 -> Mer touchée, 3 -> Bateau découvert, 4 -> Bateau touché 
		//bool tireSurCase(int x, int y); // Renvoi de la présence d'un bateau ou non

		void afficherGrille(); 
};



#endif // !_GRILLELOGIQUE_

