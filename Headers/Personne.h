#include <vector>
#include <string>
#include <iostream>
#include "../Headers/Bateau.h"

using namespace std;

class Personne
{
	string nom_;
	int nbBateaux_;
	vector<Bateau> flotte_;
public:
	Personne(const string nom_, int NbBateaux_ = 6);

	void setNom(string nom) { nom_ = nom; }
	void setNbBateaux(int n) { nbBateaux_ = n; }
	string getNom() { return nom_; }
	int getNbBateaux() {return nbBateaux_; }

	void ajouterBateau(int cX1, int cY1, int cX2, int cY2,Personne Joueur, int i );
	virtual void ChoixCible(); //méthode virtuelle

};