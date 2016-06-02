#include <Personne.h>
#include <iostream>
#include <vector>

using namespace std;


class Bateau
{

	int positionX_; // position de la colonne de la "tête" du bateau
	int positionY_; // position de la ligne de la "tête" du bateau
	int tailleBat_; //taille du bateau
	int PositionTete_;
	vector <bool> casesBateau_; // indique quels cases de la grille occupe le bateau
	public:
	Bateau bateau();
	Bateau bateau(int positionX_ = 1, int  positionY_ = 1, int tailleBat = 4, int PositionTete, vector <bool> cases); // constructeur
	void BateauTouche(int position,bool casesBateau);
	int lienGrille(int postionTab, int casesBateau);


};