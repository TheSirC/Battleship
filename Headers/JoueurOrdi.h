#include "../Headers/Personne.h"
//#include  "../Headers/Affichage.h"
using namespace std;

class JoueurOrdi : public Personne
{
	int CibleX_;
	int CibleY_;
	
public:
	JoueurOrdi();
	void ChoixCible(int nbLignes, int nbColonnes);
	const int getCibleX() { return CibleX_; } // méthodes en lignes
	const int getCibleY() { return CibleY_; }
	void ajouterBateau(int nbColonnes, int nbLignes, Personne Ordi, int i);
};