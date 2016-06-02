#include <vector>
#include <string>
#include <Jeu.h>

using namespace std;

template <class Grille> class GrilleLogique /// modèle diapo 129 type template => tableaux (séance 5)
{
	int nbLignes_;
	int nbColonnes_;
	Grille * Grille_;
	vector <Bateau> Flotte; // contient les bateaux de la partie

	public;
	GrilleLogique(int nbLignes_ = 10, int nbColonnes_ = 10); // constructeur
	~GrilleLogique();// destructeur
	void SetPositionBateaux(); // renvoie la position des bateaux (sélectionnés)
	void GetPositionBateaux(); // entre la  position d'un bateau

	
};