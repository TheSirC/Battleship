#include "../Headers/jeu.h"

Jeu::Jeu(string NomJoueur, int nombreBateau_)
{
		// Initilaisation de l'affichage
		unsigned char couleurGrille[3] = { 0,0,255 };
		affichage Grille(couleurGrille, 10, 10);

		//Initilisation des joueurs (humain et IA)
		JoueurHumain* Joueur1 = new JoueurHumain;
		JoueurOrdi* Joueur2 = new JoueurOrdi;

		// Placement des bateaux du joueur humain
		cout << "Placez vos " << nombreBateau_ << " bateaux." << endl;
		for (size_t i = 0; i < Joueur1->listeBateau.size(); i++)
		{
				cout << " Placez la proue du bateau." << endl;
				int clicX1 = Grille.coordonnesClic[0], clicY1 = Grille.coordonnesClic[1];
				listeBateau[i].positionX = clicX1;
				listeBateau[i].positionY = clicY1;
				cout << "Selectionnez l'orientation du bateau." << endl;
				int clicX2 = Grille.coordonnesClic[0], clicY2 = Grille.coordonnesClic[1];
				if (clicX1 > clicX2)
				{
						listeBateau[i].orientation = 3;
				}
				else if (clicY1>clicY2)
				{
						listeBateau[i].orientation = 2;
				}
				else if (clicY1<clicY2)
				{
						listeBateau[i].orientation = 0;
				}
				else
				{
						listeBateau[i].orientation = 1;
				}
		}

		// Placement des bateaux de l'IA
		cout << "Placement des bateaux par votre adversaire." << endl;
		Joueur2.choixCibleOrdi();

		// Déroulement du jeu
		while (!partieTerminee)
		{
				if (!quelJoueur_)
				{
						cout << "C'est votre tour !" << endl;
						int clicX1 = Grille.coordonnesClic[0], clicY1 = Grille.coordonnesClic[1];
						if ((clicX1<0) || (clicX1>Grille.getNombreLignes()) || (clicY1<0) || (clicY1>Grille.getNombreColonnes()))
								continue;
				}
				
		}
}

Jeu::~Jeu()
{
}

void Jeu::changerJoueur()
{

		return ;
}

vector<int> Jeu::getGrille()
{
		return vector<int>();
}
