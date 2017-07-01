#include "../Headers/GrilleLogique.h"

GrilleLogique::GrilleLogique(int nombreLignes_, int nombreColonnes_)
{
		// Déclaration de la grille
		this->Grille_ = new int*[nombreLignes_]; // Déclaration des lignes de la grille 2D
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

int GrilleLogique::getEtatCase(int x, int y)
{
	return Grille_[x][y];
}

void GrilleLogique::setEtatCase(int x, int y, int Etat)
{
	Grille_[x][y] = Etat;
}

bool GrilleLogique::tireSurCase(int x, int y)
{
	if (Grille_[x][y] == 1)
	{
		cout << "Dommage, c'est de l'eau..." << endl;
		return 1;
	}
	else if (Grille_[x][y] == 3)
	{
		cout << "Bien joué ! C'était un bateau !" << endl;
		return 1;
	}
	else
	{
		cout << "Vous avez déjà bombardé cette case !" << endl;
		return 0;
	}
}

void GrilleLogique::afficherGrille()
{

		for (int i = 0; i < nombreLignes_; i++)
		{
				for (int j = 0; j < nombreColonnes_; j++)
				{
					/*cout << " " << Grille_[i][j] << " ";*/
						if ((Grille_[i][j] == 2) || (Grille_[i][j] == 4)) // Vérifie la condition concernant le fait que la case est déjà été testée
						{
								cout << " X ";
						}
						else if (Grille_[i][j] == 1)
						{
								cout << " M ";
						}
						else
						{
								cout << " B ";
						}
				}
				cout << endl;
		}
}

void GrilleLogique::ajouterBateau(Bateau BateauAAjouter)
{
		switch (BateauAAjouter.getOrientation())
		{
				case 0:
						for (int i = BateauAAjouter.getPositionX(); i > BateauAAjouter.getPositionY() + BateauAAjouter.getTaille() ; i--)
						{
								setGrille()[BateauAAjouter.getPositionX()][i] = 3;
						}
						break;
				case 1:
						for (int i = BateauAAjouter.getPositionY(); i < BateauAAjouter.getPositionY() + BateauAAjouter.getTaille(); i++)
						{
								setGrille()[BateauAAjouter.getPositionX()][i] = 3;
						}
						break;
				case 2:
						for (int i = BateauAAjouter.getPositionX(); i < BateauAAjouter.getPositionY() + BateauAAjouter.getTaille(); i++)
						{
								setGrille()[BateauAAjouter.getPositionX()][i] = 3;
						}
						break;
				default:
						for (int i = BateauAAjouter.getPositionY(); i > BateauAAjouter.getPositionY() + BateauAAjouter.getTaille(); i--)
						{
								setGrille()[BateauAAjouter.getPositionX()][i] = 3;
						}
						break;
		}
}
