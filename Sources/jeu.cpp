#include "../Headers/jeu.h"

Jeu::Jeu(string NomJoueur, int nombreBateau_)
{
		// Initilaisation de l'affichage
		unsigned char couleurGrille[3] = { 0,0,255 };
		affichage Grille(couleurGrille, 10, 10);

		// Initilaisation de la grille logique
		grilleLogique grilleLogique();

		// Initilisation des joueurs (humain et IA)
		JoueurHumain* Joueur1 = new JoueurHumain;
		JoueurOrdi* Joueur2 = new JoueurOrdi;

		// Placement des bateaux du joueur humain
		cout << "Placez vos " << nombreBateau_ << " bateaux." << endl;
		for (size_t i = 0; i < Joueur1->listeBateau.size(); i++)
		{
				cout << " Placez la proue du bateau." << endl;
				int clicX1 = Grille.coordonnesClic[0], clicY1 = Grille.coordonnesClic[1];
				Joueur1->listeBateau[i].positionX = clicX1;
				Joueur1->listeBateau[i].positionY = clicY1;
				cout << "Selectionnez l'orientation du bateau." << endl;
				int clicX2 = Grille.coordonnesClic[0], clicY2 = Grille.coordonnesClic[1];
				if (clicX1 >= clicX2)
				{
						Joueur1->listeBateau[i].orientation = 3;
				}
				else if (clicY1 >= clicY2)
				{
						Joueur1->listeBateau[i].orientation = 2;
				}
				else if (clicY1<clicY2)
				{
						Joueur1->listeBateau[i].orientation = 0;
				}
				else
				{
						Joueur1->listeBateau[i].orientation = 1;
				}
		}

		// Placement des bateaux de l'IA
		cout << "Placement des bateaux par votre adversaire." << endl;
		bool aReussiATirer1 = 0;
		bool aReussiATirer2 = 0;
		for (size_t i = 0; i < Joueur2->listeBateau.size(); i++)
		{
			while (!aReussiATirer1)
			{
				Joueur2.choixCibleOrdi(Grille.nombreLignes, Grille.nombreColonnes);
				int cOX1 = Joueur2.getCibleX(); // Première coordonnee X choisie par l'ordinateur
				int cOY1 = Joueur2.getCibleY(); // Première coordonnee Y choisie par l'ordinateur
				switch (grilleLogique.etatCase(cOX1, cOY1))
				{
				case 1:
					aReussiATirer1 = !aReussiATirer1;
					break;
				case 3:
					aReussiATirer1 = !aReussiATirer1;
					break;
				default:
					break;
				}
			}

			while (!aReussiATirer2)
			{
				Joueur2.choixCibleOrdi(Grille.nombreLignes, Grille.nombreColonnes);
				int cOX2 = Joueur2.getCibleX(); // Deuxième coordonnee X choisie par l'ordinateur
				int cOY2 = Joueur2.getCibleY(); // Deuxième coordonnee Y choisie par l'ordinateur
				switch (grilleLogique.etatCase(cOX, cOY))
				{
					case 1:
						aReussiATirer2 = !aReussiATirer2;
						break;
					case 3:
						aReussiATirer2 = !aReussiATirer2;
						break;
					default:
						break;
				}
				if (cOX1 >= cOX2)
				{
					Joueur2->listeBateau[i].orientation = 3;
				}
				else if (cOY1 >= cOY2)
				{
					Joueur2->listeBateau[i].orientation = 2;
				}
				else if (cOY1<cOY2)
				{
					Joueur2->listeBateau[i].orientation = 0;
				}
				else
				{
					Joueur2->listeBateau[i].orientation = 1;
				}
			}
		

		// Déroulement du jeu
		while (!partieTerminee)
		{
				if (!quelJoueur_)
				{
						cout << "C'est votre tour !" << endl;
						int clicX1 = Grille.coordonnesClic[0], clicY1 = Grille.coordonnesClic[1];
						if ((clicX1<0) || (clicX1>Grille.getNombreLignes()) || (clicY1<0) || (clicY1>Grille.getNombreColonnes()))
								
						quelJoueur_ = !quelJoueur_;
				}
				else
				{
					// Tour de l'IA
					cout << "C'est au tour de votre adversaire." << endl;
					bool aReussiATirer = 0;
					while (!aReussiATirer)
					{
						Joueur2.choixCibleOrdi(Grille.nombreLignes, Grille.nombreColonnes);
						int cOX = Joueur2.getCibleX(); // Coordonnee X choisie par l'ordinateur
						int cOY = Joueur2.getCibleY(); // Coordonnee Y choisie par l'ordinateur
						switch (grilleLogique.etatCase(cOX, cOY)):
							case 1:
								aReussiATirer = !aReussiATirer;
								break;
							case 3:
								aReussiATirer = !aReussiATirer;
								break;
							default:
								break;
					}	

					quelJoueur_ = !quelJoueur_;
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
