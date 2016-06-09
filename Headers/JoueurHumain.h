#include "Personne.h"

using namespace std;

#ifndef _JOUEURHUMAIN_
#define _JOUEURHUMAIN_

class JoueurHumain : public Personne
{
public:
		JoueurHumain(const string &nom_, int NbBateaux_ = 6);

		void ChoixCible(int CibleX, int CibleY); // enregistrement de la cible indiquée par le clic du joueur
		void ajouterBateau(int cX1, int cY1, int cX2, int cY2, int i);
};

#endif // !_JOUEURHUMAIN_