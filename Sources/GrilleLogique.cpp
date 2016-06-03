#include "../Headers/GrilleLogique.h"




//définition du constructeur
GrilleLogique::GrilleLogique(int nbLignes, int nbColonnes)
{
	if (nbLignes_ <= 0)
		nbLignes_ = 1;
	else
		nbLignes_ = nbLignes;
	if (nbColonnes_ <= 0)
		nbColonnes_ = 1;
	else
		nbColonnes_ = nbColonnes;
}


GrilleLogique::~GrilleLogique()
{
	cout << "destruction de :" << endl; // à compléter
}

void GrilleLogique::SetPositionBateaux()
{
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<< Flotte[i][j] << endl;/// CORRIGER
		}
	}
}


//enregistre la position des bateaux
void GrilleLogique::GetPositionBateaux()
{
	string ori;
	int verif = 1;
	int tab[4][2];
	cout << "entrer les coordonnées du bateau "<< endl;
	cout << "position X  de la tête" << endl;
	cin >> tab[1][1];

	
	do
	{
		cout << "Quelle orientation? [nord,sud,est,ouest]" << endl;
		cin >> ori;
		if (ori == "nord")
		{
			for (int i = 1; i < 3; i++)
			{
				tab[i][1] = tab[i - 1][2] - 1;
				tab[i][2] = tab[i - 1][1];
			}
		}
		if (ori == "sud")
		{
			for (int i = 1; i < 3; i++)
			{
				tab[i][2] = tab[i - 1][2] + 1;
				tab[i][1] = tab[i - 1][1];
			}
		}
		if (ori == "est")
		{
			for (int i = 1; i < 3; i++)
			{
				tab[i][1] = tab[i - 1][1] + 1;
				tab[i][2] = tab[i - 1][2];
			}
		}
		if (ori == "ouest")
		{
			for (int i = 1; i < 3; i++)
			{
				tab[i][1] = tab[i - 1][1] - 1;
				tab[i][2] = tab[i - 1][2];
			}
		}

		//étape de vérification
		for (int i = 0; i < 3; i++)
		{
			if (tab[i][1]>nbColonnes_ || tab[i][2]>nbLignes_)
			{
				cout << "Attention dépassement du tableau" << endl;
				verif = 0;
			}
			if (tab[i][1] < 1 || tab[i][2] < 1)
			{
				cout << "Attention dépassement du tableau" << endl;
				verif = 0;
			}
			else
			{
				cout << "Bateau enregistré" << endl;
				verif = 1;
			}
		}
	} while (verif==0);

}


void GrilleLogique::AfficherParametres()
{
	cout << "Nombre de colonnes :" << nbColonnes_ << endl;
	cout << "Nombre de lignes :" << nbColonnes_ << endl;
}