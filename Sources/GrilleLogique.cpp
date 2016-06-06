#include "../Headers/GrilleLogique.h"

GrilleLogique::GrilleLogique(int nombreLignes_, int nombreColonnes_)
{
		// D�claration de la grille
		this->Grille_ = new int*[nombreLignes_]; // D�claration des lignes de la grille 2D
		for (int i = 0; i < nombreLignes_; i++)
		{
				Grille_[i] = new int[nombreColonnes_]; // D�claration des colonnes de la grille 2D
		}

		// Initialisation des cases de la grille avec l'�tat 1 (Mer)
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
		cout << "Dommage, c'est de l'eau." << endl;
		return 1;
	}
	else if (Grille_[x][y] == 3)
	{
		cout << "Bien jou� ! C'�tait un bateau !" << endl;
		return 1;
	}
	else
	{
		cout << "Vous avez deja bombarde cette case !" << endl;
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
						if ((Grille_[i][j] == 2) || (Grille_[i][j] == 4)) // V�rifie la condition concernant le fait que la case est d�j� �t� test�e
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