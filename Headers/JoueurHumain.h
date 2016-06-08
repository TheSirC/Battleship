#include "../Headers/Personne.h"
//#include  "../Headers/Affichage.h"

class JoueurHumain : public Personne
{
	int CibleX_;
	int CibleY_;
public:
	JoueurHumain(const string &nom_, int NbBateaux_ = 6);
	void ChoixCible(int CibleX, int CibleY); // enregistrement de la cible indiquée par le clic du joueur
	const int getCibleX() {return CibleX_; } // méthodes en lignes
	const int getCibleY() { return CibleY_; }

	void ajouterBateau(int cX1, int cY1, int cX2, int cY2, int i);
};