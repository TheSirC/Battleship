//#include <Personne.h>
#include <iostream>
#include <vector>

using namespace std;


class Bateau
{

	int positionX_; // position de la colonne de la "tête" du bateau
	int positionY_; // position de la ligne de la "tête" du bateau
	int tailleBat_; //taille du bateau
	string orientation;
	vector <int> casesBateau_; // indique quels cases de la grille occupe le bateau
	public:
	Bateau(string orientation="nord",int positionX_ = 1, int  positionY_ = 1, int tailleBat_ = 4); // constructeur
	void BateauTouche(int positionX,int positionY);
	int lienGrille(int postionTab, int casesBateau);


};