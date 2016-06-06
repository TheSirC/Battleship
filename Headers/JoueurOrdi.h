#include "Personne.h"

using namespace std;

class JoueurOrdi : public Personne
{
	int CibleX_;
	int CibleY_;
	
public:
	JoueurOrdi(const string &nom = "Ordinateur", int NbBateaux = 6);
	void ChoixCible(int nbLignes, int nbColonnes);
	const int getCibleX() { return CibleX_; } // méthodes en lignes
	const int getCibleY() { return CibleY_; }
	void ajouterBateau(int nbColonnes, int nbLignes, int i);
};