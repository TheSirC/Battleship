
#include "../Headers/Bateau.h"
#include <vector>



Bateau::Bateau(string orientation, int positionX, int  positionY, int taille)
{

	if (positionX <= 0)
		positionX_ = 1;
	else
		positionX_ = positionX;
	if (positionY <= 0)
		positionY_ = 1;
	else
		positionY_ = positionY;

	tailleBat_ = taille;

}