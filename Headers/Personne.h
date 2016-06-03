#include <vector>
#include <string>
#include <iostream>
#include "../Headers/Bateau.h"

using namespace std;

class Personne
{
	string nom_;
	int NbBateaux_;
	vector <Bateau*> ListeBateau_;
public:
	Personne(const string nom_, int NbBateaux_ = 4);
	void AjouterBateau(Bateau *bat);
	int TourSuivant();
	virtual void ChoixCible(); //méthode virtuelle

};