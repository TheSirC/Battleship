#include "Personne.h"

using namespace std;

class JoueurOrdi : public Personne
{
public:
	JoueurOrdi(const string &nom = "Ordinateur", int NbBateaux = 6);
	void ChoixCible(int nbLignes, int nbColonnes);
	const int getCibleX() { return CibleX_; } // méthodes en lignes
	const int getCibleY() { return CibleY_; }
	void ajouterBateau(int cX1, int cY1, int cX2, int cY2, int i);
};