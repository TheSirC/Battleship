#include "../Headers/GrilleLogique.h"

GrilleLogique::GrilleLogique(int nombreLignes_, int nombreColonnes_)
{
		// Déclaration de la grille
		int** Grille_ = new int*[nombreLignes_]; // Déclaration des lignes de la grille 2D
		for (int i = 0; i < nombreLignes_; i++)
		{
				Grille_[i] = new int[nombreColonnes_]; // Déclaration des colonnes de la grille 2D
		}

		// Initialisation des cases de la grille avec l'état 1 (Mer)
		for (int i = 0; i < nombreLignes_; i++)
		{
				for (int j = 0; j < nombreColonnes_; j++)
				{
						Grille_[i][j] = 1;
				}
		}

}

GrilleLogique::~GrilleLogique()
{
		for (int i = 0; i < nombreLignes_; i++)
		{
				delete[] Grille_[i]; // Destruction de chacune des lignes
		}

		delete[] Grille_; // Destruction du pointeur vers le tableau
}

//GrilleLogique::getEtatCase(int x, int y)
//{
//
//}
//
//GrilleLogique::setEtatCase(int x, int y, int Etat)
//{
//
//}
//
//GrilleLogique::tireSurCase(int x, int y)
//{
//
//}

void GrilleLogique::afficherGrille()
{
		for (int i = 0; i < nombreColonnes_; i++)
		{
				cout << " " << i << " " << endl;
		}

		for (int i = 0; i < nombreLignes_; i++)
		{
				
				for (int j = 0; j < nombreColonnes_; j++)
				{
						cout << "____" << endl << i << " |";
				}

				for (int j = 0; j < nombreColonnes_; j++)
				{
						if ((Grille_[i][j] == 2) && (Grille_[i][j] == 4)) // Vérifie la condition concernant le fait que la case est déjà été testée
						{
								cout << " X ";
						}
						else if (Grille_[i][j] == 1)
						{
								cout << "  ";
						}
						else
						{
								cout << " B ";
						}
						cout << "|";
				}
				cout << endl;
		}

		for (int j = 0; j < nombreColonnes_; j++)
		{
				cout << "____" << endl;
		}
}