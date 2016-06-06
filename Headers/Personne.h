#include <vector>
#include <string>
#include <iostream>
#include "../Headers/Bateau.h"

using namespace std;

class Personne
{
protected:
	string nom_;
	int nbBateaux_;
	vector<Bateau> flotte_;
public:

	Personne(const string &nom_="", int NbBateaux_ = 6);
	void setNom(string nom) { nom_ = nom; }
	void setNbBateaux(int n) { nbBateaux_ = n; }
	string getNom() { return nom_; }
	int getNbBateaux() {return nbBateaux_; }

	virtual void ajouterBateau();
	virtual void ChoixCible(); //on récupère la méthode choixCible soit de JoueurHumain, soit de JoueurOrdi
};