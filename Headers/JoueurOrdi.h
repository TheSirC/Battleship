#include "Personne.h"

using namespace std;
#ifndef _JOUEURORDI_
#define _JOUEURORDI_

class JoueurOrdi : public Personne
{
		public:
				JoueurOrdi(const string &nom = "Ordinateur", int NbBateaux = 6);

				void ChoixCible(int nbLignes, int nbColonnes);
				void ajouterBateau(int cX1, int cY1, int cX2, int cY2, int i);
};

#endif // !_JOUEURORDI_