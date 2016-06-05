//#include <Personne.h>
#include <iostream>
#include <vector>

using namespace std;


class Bateau
{

	int positionX_; // position de la colonne de la proue du bateau
	int positionY_; // position de la ligne de la proue du bateau
	int tailleBat_; //taille du bateau
	int orientation_; //[0 : nord, 1 : est, 2 : sud, 3 :ouest]
	//vector <int> casesBateau_; // indique quels cases de la grille occupe le bateau
	public:
		int setPositionX(int positionX) { positionX_ = positionX; }
		int setPositionY(int positionY) { positionY_ = positionY; }
		int setOrientation(int orientation) { orientation_ = orientation; }
		int getPositionX() { return positionX_ ; }
		int getPositionX() { return positionY_ ; }
		int getOrientation() { return orientation_; }
	Bateau(int orientation= 0, int tailleBat_ = 4); // constructeur
	void BateauTouche(int positionX,int positionY);
	int lienGrille(int postionTab, int casesBateau);
};