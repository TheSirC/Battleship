#include <vector>
#include <string>
#include <iostream>

#include "Bateau.h"

using namespace std;

#ifndef _PERSONNE_
#define _PERSONNE_

class Personne
{
protected:
		string nom_;
		int nbBateaux_;
		vector<Bateau> flotte_;
		int CibleX_;
		int CibleY_;
public:

		Personne(const string &nom_ = "", int NbBateaux_ = 6);
		void setNom(string nom) { nom_ = nom; }
		void setNbBateaux(int n) { nbBateaux_ = n; }

		const int getNbBateaux() { return nbBateaux_; }
		const int getCibleX() { return CibleX_; }
		const int getCibleY() { return CibleY_; }
		string getNom() { return nom_; }

		vector<Bateau> getFlotte() { return flotte_; }
		virtual void ajouterBateau();
		virtual void ChoixCible(); //on récupère la méthode choixCible soit de JoueurHumain, soit de JoueurOrdi
};

#endif // !_PERSONNE_