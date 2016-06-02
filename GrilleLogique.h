#include <vector>
#include <string>
#include <iostream>

using namespace std;

class GrilleLogique /// modèle diapo 129 type template => tableaux (séance 5)
{
	int nbLignes_;
	int nbColonnes_;
	vector <int> *Flotte; // contient les positions des bateaux

public:
	GrilleLogique(int nbLignes_ = 10, int nbColonnes_ = 10); // constructeur
	~GrilleLogique();// destructeur
	void SetPositionBateaux(); // renvoie la position des bateaux (sélectionnés)
	void GetPositionBateaux(); // entre la  position d'un bateau


	
};