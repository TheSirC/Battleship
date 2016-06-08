#include "../Headers/jeu.h"

Jeu::Jeu(string NomJoueur, int nombreBateau_)
{
	// Initilaisation de l'affichage
	unsigned char couleurGrille[3] = { 0, 0, 255 };
	affichage Grille(couleurGrille, 10, 10);

	// Initilaisation de la grille logique
	GrilleLogique grilleLogique = GrilleLogique();

	// Initilisation des joueurs (humain et IA)
	JoueurHumain Joueur1 = JoueurHumain(NomJoueur, nombreBateau_);
	JoueurOrdi Joueur2 = JoueurOrdi();

	// Placement des bateaux du joueur humain
	cout << "Placez vos " << nombreBateau_ << " bateaux." << endl;
	vector<Bateau> flotte = Joueur1.Personne::getFlotte();
	for (int i = 0; i < flotte.size(); i++)
	{
		cout << " Placez la proue du bateau." << endl;
		int cX1 = Grille.coordonnesClic[0], cY1 = Grille.coordonnesClic[1];
		cout << "Selectionnez l'orientation du bateau." << endl;
		int cX2 = Grille.coordonnesClic[0], cY2 = Grille.coordonnesClic[1];
		Joueur1.ajouterBateau(cX1, cY1, cX2, cY2, i);
	}

	// Placement des bateaux de l'IA
	cout << "Placement des bateaux par votre adversaire." << endl;
	vector<Bateau> flotte = Joueur2.Personne::getFlotte();
	for (int i = 0; i < flotte.size(); i++)
	{
		int cX1, cX2, cY1, cY2;
		bool aReussiATirer1 = 0;
		bool aReussiATirer2 = 0;

		
		while (!aReussiATirer1)
		{
			Joueur2.ChoixCible(Grille.getNombreLignes(), Grille.getNombreColonnes());
			int cX1 = Joueur2.getCibleX(); // Première coordonnee X choisie par l'ordinateur
			int cY1 = Joueur2.getCibleY(); // Première coordonnee Y choisie par l'ordinateur
			switch (grilleLogique.getEtatCase(cX1, cY1))
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
				Joueur2.ChoixCible(Grille.getNombreLignes(), Grille.getNombreColonnes());
				cX2 = Joueur2.getCibleX(); // Deuxième coordonnee X choisie par l'ordinateur
				cY2 = Joueur2.getCibleY(); // Deuxième coordonnee Y choisie par l'ordinateur
				switch (grilleLogique.getEtatCase(cX2, cY2))
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

			}
			Joueur2.ajouterBateau(Grille.getNombreLignes(), Grille.getNombreColonnes(), i);
		
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
					switch (grilleLogique.etatCase(cOX, cOY)) :
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

		return;
	}

	vector<int> Jeu::getGrille()
	{
		return vector<int>();
	}
