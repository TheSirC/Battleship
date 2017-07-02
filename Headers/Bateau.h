#include <iostream>
#include <vector>

using namespace std;

#ifndef _BATEAU_
#define _BATEAU_

class Bateau
{

		int positionX_; // position de la colonne de la proue du bateau
		int positionY_; // position de la ligne de la proue du bateau
		int tailleBat_; //taille du bateau
		int orientation_; // [0 : nord, 1 : est, 2 : sud, 3 :ouest]

public:
		void setPositionX(int positionX) { positionX_ = positionX; }
		void setPositionY(int positionY) { positionY_ = positionY; }
		void setOrientation(int orientation) { orientation_ = orientation; }

		int getPositionX() { return positionX_; }
		int getPositionY() { return positionY_; }
		int getOrientation() { return orientation_; }
		int getTaille() { return tailleBat_; }


		Bateau(int orientation = 0, int tailleBat_ = 4); // constructeur
		void BateauTouche(int positionX, int positionY);
		int lienGrille(int postionTab, int casesBateau);


};

#endif // !_BATEAU_
